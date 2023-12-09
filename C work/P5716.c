#include <stdio.h>
int YEAR(int x);
int main()
{
    int year,month;
    scanf("%d %d", &year, &month);
    int isyear = YEAR(year);
    if(isyear == 1) 
    {
        int arr1[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
        printf("%d", arr1[month-1]);
    }
    else 
    {
        int arr0[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        printf("%d", arr0[month-1]);
    }
}

int YEAR(int x)
{
    if(x%4==0 && x%100 !=0) return 1;
	else if(x%400 == 0 ) return 1;
	else return 0;
}
