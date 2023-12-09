#include <stdio.h>
void swap(int *a,int *b) //交換兩個變數
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int len) 
{
    int i,j;
    for (i = 0 ; i < len - 1 ; i++) 
    {
        int min = i;
        for (j = i + 1; j < len; j++) 
            if (arr[j] < arr[min]) 
                min = j; 
            swap(&arr[min], &arr[i]); 
    }
}

int main(){
    int n = 10;
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",arr[i]);
    }
    selection_sort(arr, n);
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}