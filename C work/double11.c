#include <stdio.h>
int MIN(int x,int y);
double cat(int w){
    if(w>=500) w = w/10.0;
    return w;
}

double jd(int w){
    if(w>=1000) w = w-150;
    return w;
}

double tiktok(int w){
    if(w == 1111) w = 0;
    else w /= 20.0;
    return w;
}
int main()
{
    int n;
    scanf("%d",&n);
    double arr[10005];
    double sum=0,w;
    for(int i = 0;i<n;i++){
        scanf("%lf",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        w = MIN(MIN(cat(i),jd(i)),tiktok(i));
        sum += w;
    }
    printf("%lf",sum);
    return 0;
}

int MIN(int x,int y){
    return x<y ? x:y;
}
