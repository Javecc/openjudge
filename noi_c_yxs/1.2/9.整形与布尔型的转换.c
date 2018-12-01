#include<stdio.h>
int main(void){
    int i;
    _Bool j;
    scanf("%d",&i);
    j = (_Bool)i;
    i = (int)j;
    printf("%d",i);
    return 0;
}
//2018.12.01