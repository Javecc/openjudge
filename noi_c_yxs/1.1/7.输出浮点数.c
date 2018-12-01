#include<stdio.h>
int main(void){
    double s;
    scanf("%lf",&s);
    printf("%f\n",s);
    printf("%.5f\n",s);
    printf("%e\n",s);
    printf("%g\n",s);
    return 0;
}
// %f  表示按浮点数的格式输出
// %e  表示按指数形式的浮点数的格式输出
// %g  表示自动选择合适的表示法输出  
// 2018.11.29