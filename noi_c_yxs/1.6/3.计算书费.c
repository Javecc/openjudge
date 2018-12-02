#include<stdio.h>
int main(void){
    float value[] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    int a[10],i;
    float f=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        f += value[i]*a[i];
    }
    printf("%.1f",f);
    return 0;
}
//2018.12.02