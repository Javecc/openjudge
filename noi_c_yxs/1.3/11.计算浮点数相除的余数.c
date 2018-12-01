#include<stdio.h>
int main(void){
    double a,b;
    scanf("%lf%lf",&a,&b);
    int i = a/b;
    printf("%g",a-i*b);
    return 0;
}
/*要使小数尾部没有多余的0，可以使用%g
 */
//2018.12.01