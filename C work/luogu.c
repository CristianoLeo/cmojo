#include <stdio.h>
#include <math.h>
int arr[10005];
int Isprime(int n){
    int isprime = 1;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i == 0){
            isprime = 0;
            break;
        }
    }
    return isprime;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mask = 0;
    for(int i = 0;i<n;i++){
        if(Isprime(arr[i])==0 || arr[i] == 1){
            mask++;
            for(int j = i;j<n-1;j++){
                arr[j] = arr[j+1];
            }
        }
    }


    for(int i = 0;i<n-mask;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}