#include <stdio.h>
int main()
{
    int l,m;
    int mask = 0;
    scanf("%d %d",&l,&m);
    int arr[100001] = {0};
    for(int i = 0;i<l+1;i++){
        arr[i] = 1;
    }
    for(int i=1;i<=m;i++) {
        int u,v;
        scanf("%d %d",&u,&v);
        for(u;u<=v;u++){
            arr[u] = 0;
        }   
    }
    for(int i=0;i<l+1;i++){
        if(arr[i]==1) mask++;
    }
    printf("%d",mask);
    return 0;
}