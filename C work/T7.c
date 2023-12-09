#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main(){
    int n;
    scanf("%d",&n);
    int **arr = (int**)calloc(n,sizeof(int));
    if(arr == NULL){
        perror("main");
        return 0;
    }
    for(int i = 0;i<n;i++){
        arr[i] = (int*)calloc(n,sizeof(int));
        if(arr[i] == NULL){
            perror("main");
            return 0;
        }
    }
    int count=1;
    for(int j = 0;j<n;j++){
        for(int i = 0;i<n;i++){
            arr[i][j]= count;
            count++;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",arr[i][j]);
            if(j == n-1) printf("\n");
        }
    }
    for(int i = 0;i<n;i++){
        free(arr[i]);
        arr[i] = NULL;
    }
    free(arr);
    arr = NULL;
    return 0;
}