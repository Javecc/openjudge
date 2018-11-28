#include<stdio.h>
int main(void){
    int i,a[3];
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        printf("%8d ",a[i]);
    }
    return 0;
}