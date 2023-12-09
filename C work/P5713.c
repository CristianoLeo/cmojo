#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int local_time = 5*n;
    int luogu_time = 11+3*n;
    if(local_time<luogu_time) printf("Local");
    else printf("Luogu");
    return 0; 
}