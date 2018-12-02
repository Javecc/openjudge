#include<stdio.h>
#define MAX 101
int main(void){
    int a[MAX];
    int n,m,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(m==a[i]) count++;
    }
    printf("%d",count);
    return 0;
}
//2018.12.02