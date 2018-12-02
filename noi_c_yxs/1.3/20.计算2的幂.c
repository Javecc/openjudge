#include<stdio.h>
#include<math.h>
int main(void){
    int i,n;
    long s = 1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        s *= 2;
    }
    printf("%ld",s);
    return 0;
}
//2018.12.02