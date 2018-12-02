#include<stdio.h>
int main(void){
    int m;
    int a,b,c,d=0,e=0,f=0;
    scanf("%d",&m);
    a = m%3;
    b = m%5;
    c = m%7;
    if(c==0) f=1;
    if(b==0) e=1;
    if(a==0 && f==1 || a==0 && e==1) printf("3 ");
    else if(a==0) printf("3");
    if(b==0 && f==1) printf("5 ");
    else if(b==0) printf("5");
    if(c==0) printf("7");
    if(a!=0 && b!=0 && c!=0) printf("n");
    return 0;
}
//2018.12.02