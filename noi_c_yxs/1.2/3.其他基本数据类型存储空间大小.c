#include<stdio.h>
int main(void){
    _Bool i;
    char j;
    printf("%d %d",sizeof(i),sizeof(j));
    return 0;
}
/*注意：在之前没有注意过这个问题，就是c中的布尔类型
  在C99标准中规定规定布尔类型为_Bool*/
//2018.12.01