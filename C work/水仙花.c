#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int mask = 1;
    int ret = 0;
    scanf("%d",&n);
    for(int i = 1;i<=n-1;i++) mask *=10;
    for(int num = mask;num<mask*10-1;num++)
    {
        int tmp = num;
        while(tmp){
            ret += pow(tmp % 10,n);
            tmp/=10;
        }
        if(ret == num) printf("%d ",num);
        else;
    }
    return 0;
}

