#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("positive");
    }else if(n==0){
        printf("zero");
    }else{
        printf("negative");
    }
    return 0;
}
//2018.12.02