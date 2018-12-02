#include<stdio.h>
int main(void){
    float n;
    scanf("%f",&n);
    if(n < 0){
        printf("%.2f",-1*n);
    }else{
        printf("%.2f",n);
    }
    return 0;
}
//2018.12.02