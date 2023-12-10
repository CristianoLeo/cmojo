#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
        }
    }
    int mask = n/2;
    int sq = n%2;
    for(int i = 0;i <mask;i++){
        printf("%ld\n%ld\n",arr[n-1-i],arr[i]); 
        if(i == mask-1)printf("%ld",arr[mask]) ;    
    }
    return 0;

}