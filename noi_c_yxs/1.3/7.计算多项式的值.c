#include<stdio.h>
int main(void){
    double x,a,b,c,d;
    scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
    printf("%.7lf",x*(a*x*x+b*x+c)+d);
    return 0;
}
//2018.12.01