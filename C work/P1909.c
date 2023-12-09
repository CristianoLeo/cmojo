#include <stdio.h>

int NUM(int n, int x,int y)
{
    int num = n/x;
    if(n%x != 0) num +=1;
    int price = num*y;
    return price;
}
int MIN(int x, int y)
{
    return x<y ? x:y;
}
int main()
{
    int n,num_a,money_a,num_b,money_b,num_c,money_c;
    scanf("%d\n%d %d\n%d %d\n%d %d", &n, &num_a, &money_a, &num_b, &money_b, &num_c, &money_c);
    int NUM_a = NUM(n,num_a,money_a);
    int NUM_b = NUM(n,num_b,money_b);
    int NUM_c = NUM(n,num_c,money_c);
    // printf("%d %d %d\n",NUM_a,NUM_b,NUM_c);
    int MIN_all = MIN(MIN(NUM_a,NUM_b),NUM_c);
    int PRICE = MIN_all;
    // int PRICE = 0;
    // if(NUM_a<NUM_b && NUM_a<NUM_c) PRICE = NUM_a;
    // if(NUM_b<NUM_a && NUM_b<NUM_c) PRICE = NUM_b;
    // if(NUM_c<NUM_a && NUM_c<NUM_b) PRICE = NUM_c;
    printf("%d",PRICE);
    return 0;
}