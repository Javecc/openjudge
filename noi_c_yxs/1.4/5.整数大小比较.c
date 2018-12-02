#include<stdio.h>
int main(void){
    long a,b;
    scanf("%ld%ld",&a,&b);
    if(a>b) printf(">");
    else if(a == b) printf("=");
    else printf("<");
    return 0;
}
//2018.12.02