 /* #include <stdio.h>
int main()
{
	int fib[1000] = {1,1};
	int n;
	scanf("%d", &n);
	int i = 0;
	for(i = 2;i<n;i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	for(i = 0;i<n;i++)	
	{
		printf("%d ", fib[i]);
	}
	return 0;
} */


/* #include <stdio.h>
int main()
{
    int n,mask = 3,a=1,b=1,c;
    scanf("%d", &n);
    printf("%d %d ",a,b);
    while(mask != n+1)
    {
        c = a+b;
        a = b;
        b = c;
        mask++;
        printf("%d ",c);
    }
	// printf("%d",c);
    return 0;
}  */

//函数
#include <stdio.h>
int fibonacci(int n)
{
	if(n ==1 || n == 2) return 1;
	else return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
	{
		sum+=fibonacci(i);
	}
	printf("%d",sum);
	return 0;
}
