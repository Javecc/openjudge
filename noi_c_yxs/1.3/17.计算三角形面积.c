#include<stdio.h>
#include<math.h>
int main(void){
    float x1,x2,x3,y1,y2,y3;
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    float a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    float b = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    float c = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    float p = (a+b+c)/2;
    printf("%.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}
//2018.12.02