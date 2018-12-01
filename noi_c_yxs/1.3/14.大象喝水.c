#include<stdio.h>
int main(void){
    int h,r;
    float pi = 3.14159;
    scanf("%d%d",&h,&r);
    int x = 20/(pi*r*r*h/1000)+1;
    printf("%d",x);
    return 0;
}
//2018.12.01