#include <stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    double Sn = 0;
    int n = 0;
    while(Sn <= k){
        n++;
        Sn += 1.0/n;
    }
    printf("%d",n);
    return 0;
}