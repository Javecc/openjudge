#include<stdio.h>
int main(void){
    char c;
    int m;
    float x;
    double y;
    scanf("%c%d%f%lf",&c,&m,&x,&y);
    printf("%c %d %.6f %.6lf",c,m,x,y);
    return 0;
}
//2018.11.29