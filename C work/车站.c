// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d",&N);
//     int arr[N][N];
//     arr[0][N/2] = 1;
//     int row = 0,colume = N/2;
//     for(int K=2;K<=N*N;K++){
//         if(row == 0 && colume != N-1){
//             arr[N-1][colume + 1] = K;
//             row = N-1;
//             colume = colume +1;
//         }
//         else if(row != 0 && colume == N-1){
//             arr[row-1][0] = K;
//             row = row - 1;
//             colume = 0;
//         }
//         else if(row == 0 && colume == N-1){
//             arr[row+1][colume] = K;
//             row +=1;
//         }
//         // else if(row != 0 && colume != N-1){
//         //     if(arr[row-1][colume+1] == 0){
//         //         arr[row-1][colume+1] =K;
//         //     }
//         //     else arr[row+1][colume] = K;
//         // }
//     }
//     for(int i = 0;i<N;i++){
//         for(int j = 0;j<N;j++){
//             printf("%d ",arr[i][j]);
//             if(j == N-1) printf("\n");
//         }
//     }
//     return 0;
// }


#include <stdio.h>

int a,n,m,x;
//始发站上车人数为a，车站数n，终点站下车人数m，求x站开出时，车上的人数
int modulus_a[21],modulus_x[21];//上车的a的系数和x的系�?
int sum_a[21],sum_x[21];//sum_a[i]和sum_x[i]分别代表从第一站到第i站时，一共上了多少人
//对应的就是前i - 1站总共上的加上当前第i站上�?
//而第i站经过上车下车，a的系数为modulus_a[i] - modulus_a[i - 1](第i站下车的a的系�?)
//x的系数为modulus_x[i] - modulus_x[i - 1](第i站下车的x的系�?)
void init()
{
    modulus_a[1] = 1; modulus_a[2] = 0;//这两行将上车时的第一�? 第二�?
    modulus_x[1] = 0; modulus_x[2] = 1;//a和x的系数初始化�?
    sum_a[1] = sum_a[2] = 0;//将第1�?2站上下车后留下的a的系数和x的系数置�?0，最后算的时候加上了一个a�?1�?2站总共留下了的人数�?
    sum_x[1] = sum_x[2] = 0;
    for(int i = 3;i <= 19;i++){//从第三站开始，每站上车时a和x的系数是前两站a和x系数之和
    modulus_a[i] = modulus_a[i - 1] + modulus_a[i - 2];
    modulus_x[i] = modulus_x[i - 1] + modulus_x[i - 2];
    }
    for(int i = 3;i <= 19;i++){//前缀和，计算
        sum_a[i] = sum_a[i - 1] + modulus_a[i] - modulus_a[i - 1];
        sum_x[i] = sum_x[i - 1] + modulus_x[i] - modulus_x[i - 1];
    }
}
int main()
{
    // cin >> a >> n >> m >> x;
    scanf("%d %d %d %d",&a,&n,&m,&x);
    init();
    if(x == n) printf("0");
    else{
        //tmp就是把自己设的x求出�?����
        int tmp = (m - a - sum_a[n - 1] * a) / sum_x[n - 1]; // a + sum_a[n - 1] * a + sum_x[n - 1] * x = m (倒数第二站时车上的人数一定和m相等)
        printf("%d",a + sum_a[x] * a + sum_x[x] * tmp);
    }
    return 0;
}