#include <stdio.h>
#include <math.h>

int main()
{
    int number,isprime = 1;
    scanf("%d",&number);

    for(int i = 2;i <= sqrt(number);i++){
        if(number % i == 0){
            isprime = 0;
            break;
        }
    }
    if(isprime == 1) printf("YES.");
    else             printf("NO.");

    return 0;
}