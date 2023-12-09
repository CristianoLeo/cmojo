#include <stdio.h>
int MAX_NUM(int x, int y)
{
    return x>y ? x:y;
}
int MIN_NUM(int x, int y)
{
    return x<y ? x:y;
}
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int max = MAX_NUM(MAX_NUM(a,b),c);
    int min = MIN_NUM(MIN_NUM(a,b),c);
    int mid = a+b+c-max-min;
    printf("%d %d %d", min, mid, max);
    
}