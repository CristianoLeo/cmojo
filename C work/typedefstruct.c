#include <stdio.h>

typedef struct {
    int a;
    double b;
    int* data;
}list;

int main(){
    int m = 10;
    list tmp;
    tmp.a = 52;
    tmp.b = 0.1;
    tmp.data = &m;

    list* temp;
    temp = &tmp;
    int x = temp -> a;
    double y = temp -> b;
    int *z = temp -> data;
    printf("%d %lf %d",x,y,*z);
    return 0;
}