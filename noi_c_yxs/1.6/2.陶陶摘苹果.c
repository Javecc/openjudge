#include<stdio.h>
int main(void){
    int a[10],max,i,count=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&max);
    for(i=0;i<10;i++){
        if(max+30 >= a[i]) count++;
    }
    printf("%d",count);
    return 0;
}
//2018.12.02
//NOIP2005复赛 普及组