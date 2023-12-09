#include <stdio.h>
#include <math.h>
const double eps = 1e-8;
double number;
int main()
{
    int cnt = 0;
    scanf("%lf",&number);
    while(number - (int)(number) > eps){
        number *=10;
        cnt++;
    }
    int i = 0;
    int tmp = (int)number;
    while(tmp){
        if(i ==cnt)printf(".");
        printf("%d",tmp % 10);
        i++;
        tmp /= 10;
    }
    return 0;
} 
