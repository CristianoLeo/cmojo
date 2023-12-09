#include <stdlib.h>
#include <stdio.h>

int arr[1005],n;

int main()
{
    scanf("%d",&n);
    for(int i = 0;i < n;i++) scanf("%d",&arr[i]);

    printf("before change:\n");
    for(int i = 0;i < n;i++) printf("%d ",arr[i]);      printf("\n");

    for(int i = 0;i < n - 1;i++){//如果数组里有n个数，则我们需要比较n - 1轮
        for(int j = 0;j < n - 1 - i;j++){//从第一个元素开始，比较到第n - i个元素
            if(arr[j] > arr[j + 1]){//交换操作
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    printf("after change:\n");
    for(int i = 0;i <= n - 1;i++) printf("%d ",arr[i]);
    return 0;
}