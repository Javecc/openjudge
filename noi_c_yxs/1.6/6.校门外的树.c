#include<stdio.h>
#define MAXLEN 10001
int main(void){
    int l,m,i,j,count=0;
    int a[MAXLEN];
    int x,y;
    scanf("%d%d",&l,&m);
    for(i=0;i<=l;i++) a[i] = 1;
    for(i=0;i<m;i++){
        scanf("%d%d",&x,&y);
        for(j=x;j<=y;j++) a[j]=0;
    }
    for(i=0;i<=l;i++){
        if(a[i] == 1) count++;
    }
    printf("%d",count);
    return 0;
}
//2018.12.02
//NOIP2005复赛 普及组