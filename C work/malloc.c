#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main(){
    int n;
    scanf("%d",&n);
    int** arr = (int**)malloc(sizeof(int*) * n);
    if(arr == NULL){
        perror("main");
        return 0;
    }
    for(int i = 0;i<n;i++){
        arr[i] = (int*)malloc(sizeof(int*) * n);
        if(arr[i] ==NULL){
            perror("main");
            return 0;
        }
    }
    int count = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            arr[i][j]= count;
            count++;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //释放二维数组的每个一维数组；
    for(int i = 0;i<n;i++){
        free(arr[i]);
        arr[i] = NULL;
    }

    //释放二级指针申请的数组；
    free(arr);
    arr = NULL;
    return 0;
}
