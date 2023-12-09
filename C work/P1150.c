    #include <stdio.h>
    int main()
    {
        int n,k;
        int num=0;
        scanf("%d %d",&n,&k);
        while(n/k != 0) {
            num += k*(n/k);
            n = n-k*(n/k)+n/k;
        }
        printf("%d",num+n);
        return 0;
    }
