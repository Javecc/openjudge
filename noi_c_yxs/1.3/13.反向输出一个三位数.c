#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    while(n>=10){
        printf("%d",n%10);
        n /= 10;
    }
    printf("%d",n);
    return 0;
}
//2018.12.01