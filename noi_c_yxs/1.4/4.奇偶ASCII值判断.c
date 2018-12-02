#include<stdio.h>
int main(void){
    char c;
    scanf("%c",&c);
    int i = (int)c;
    if(i%2==0){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}
//2018.12.02