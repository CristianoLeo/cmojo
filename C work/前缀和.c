//求数组中l到r之间的和
#include <stdio.h>

int arr[10005],sum[10005];
int n,l,r;

int main()
{
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&arr[i]);
        sum[i] = sum[i - 1] + arr[i];//输入的同时进行前缀和计算
    }
    for(int i = 1;i<=n;i++){
        printf("%d ",sum[i]);
    }
   /*  scanf("%d %d",&l,&r);
    
    printf("%d",sum[r] - sum[l - 1]);//sum[l ~ r] = sum [r] - sum[l - 1]

     */
    return 0;
}