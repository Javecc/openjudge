#include<stdio.h>
#include<math.h>
int main(void){
    float x,y;
    int n;
    scanf("%d%f%f",&n,&x,&y);
    int m = ceil(y/x);
    printf("%d",n-m);
    return 0;
}
/*ceil()和floor()向上取整和向下取整
  存在于math库中，gcc编译时加上-lm*/
//2018.12.01