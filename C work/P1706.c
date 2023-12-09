/* 按照字典序输出自然数 1 到 n 所有不重复的排列，即 n 的全排列，要求所产生的任一数字序列中不允许出现重复的数字.*/

#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void permute(int arr[], int start, int end) {
    int i;
    if (start == end) {
        for (i = 0; i <= end; i++) {
            printf("%5d", arr[i]);
        }
        printf("\n");   
    } else {
        for (i = start; i <= end; i++) {
            swap(&arr[start], &arr[i]);
            permute(arr, start + 1, end);     
            swap(&arr[start], &arr[i]);
        }
    }
}
int main() {
    int n, i;
    printf("please enter a number n：");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    permute(arr, 0, n - 1);
    return 0;
}