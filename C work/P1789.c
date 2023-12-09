#include <stdio.h>
int main()
{
    int n,m,k;
    scanf("%d %d %d", &n, &m, &k);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    int mask=0;
    int i_m,j_m;
    int i_k,j_k;
    for(int num_m = 1;num_m <= m;num_m++){
        scanf("%d %d",&i_m,&j_m);
        for(int col=j_m - 2;col<=j_m+1;col++){
            arr[i_m][col]=1;
        }
        for(int col=j_m - 1;col<=j_m+1;col++){
            arr[i_m-1][col]=1;
        }
        for(int col=j_m - 1;col<=j_m+1;col++){
            arr[i_m+1][col]=1;
        }
        arr[i_m-2][j_m] = 1;
        arr[i_m+2][j_m] = 1;
    }
    if(k == 0) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] = 0) mask++;
            }
        }
        printf("%d",mask);
    }
    else {
        for(int num_k = 1;num_k<=k;num_k++){
            scanf("%d %d",&i_k, &j_k);
            for(int col=j_k-2;col<=j_k+2;col++){
                arr[i_k][col] = 1;
                arr[i_k-1][col] = 1;
                arr[i_k+1][col] = 1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j] = 0) mask++;
            }
        }
        printf("%d",mask);
    }
    return 0;
}