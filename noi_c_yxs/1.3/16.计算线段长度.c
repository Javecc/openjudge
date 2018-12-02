#include<stdio.h>
#include<math.h>
int main(void){
    double xa,ya,xb,yb;
    scanf("%lf%lf%lf%lf",&xa,&ya,&xb,&yb);
    printf("%.3lf",sqrt(pow(xb-xa,2)+pow(yb-ya,2)));
    return 0;
}
/*学会利用数学函数库
 */
//2018.12.02