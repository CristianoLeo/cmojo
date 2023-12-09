#include <stdio.h>
#include <math.h>

int isprime(int x)
{
    int isPrime = 1;
        for(int i=2;i<=sqrt(x);i++){
            if(x%i == 0) {
                isPrime =0;
                break;
            }
        }
    return isPrime;
}

int main()
{
    int N;
    scanf("%d",&N);
    // if(isprime(N)==1) printf("yes");
    // else printf("no");
    for(int num = 4;num<=N;num+=2){
        for(int i=2;i<num;i++){
            if(isprime(i)==1){
                if(isprime(num-i)==1){
                    printf("%d=%d+%d\n",num,i,num-i);
                    break;
                }
            }
        }
    }
    return 0;
}