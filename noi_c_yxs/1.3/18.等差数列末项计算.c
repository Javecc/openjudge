#include<stdio.h>
int main(void){
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    printf("%d",a+(n-1)*(b-a));
    return 0;
}
/*等差数列公式:an = a1 + (n-1)*d
 */
//2018.12.02