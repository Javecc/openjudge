#include<stdio.h>
int main(void){
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c = b/a*100;
    printf("%.3lf%%",c);
    return 0;
}
/*注意输出%可以使用%%进行
 */
//2018.12.01