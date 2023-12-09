//前缀和，二分法
#include <stdio.h>

int arr[10005],n,x;//n为我要输入n个数，x为我要查找的那个数

int bin_search(int *a,int n,int x){//找x或x的后继
    int left = 0,right = n;//注意：不是n - 1，此时是左闭右开的[0,n)
    while(left <right){
        int mid = left + (right - left) / 2;
        if(a[mid] >= x) right = mid;
        else            left = mid + 1;
    }//终止于left == right
    return left; //特殊情况：a[n - 1] < x时，返回n
}
// 当a[mid] >= x时，说明x在mid的左边，新的搜索区间是左半部分，left不变，更新right = mid
// 当a[mid] < x 时，说明x在mid的右边，新的搜索区间时右半部分，right不变，更新left = mid + 1
// 代码执行完毕后，left = right

int bin_search2(int *a,int n,int x){//找x或x的前驱
    int left = 0,right = n;
    while(left < right){
        int mid = left + (right - left + 1) / 2;
        if(a[mid] <= x) left = mid;
        else            right = mid - 1;
    }
    return left;
}
int main()
{
    scanf("%d",&n);
    for(int i = 0;i <= n - 1;i++) scanf("%d",&arr[i]);

    scanf("%d",&x);

    int loc = bin_search(arr,n,x);
    int loc = bin_search2(arr,n,x);

    printf("%d",loc);
    
    return 0;
}