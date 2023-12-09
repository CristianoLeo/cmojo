#include <stdio.h>
int main(){
    enum {
        monday = 1,
        tuesday
    }day;
    int num;
    switch(scanf("%d",&num)){
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        default:
        printf("yes");
    return 0;

    }
}