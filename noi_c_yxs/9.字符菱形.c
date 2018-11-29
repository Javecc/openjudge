#include<stdio.h>
int main(void){
    char c;
    int i;
    scanf("%c",&c);
    for(i=1;i<=5;i++){
        if(i%5 == 0 || i%5 == 1){
            printf("  %c\n",c);
        }else if(i%5 == 2 || i%5 == 4){
            printf(" %c%c%c\n",c,c,c);
        }else{
            printf("%c%c%c%c%c\n",c,c,c,c,c);
        }
    }
    return 0;
}
//2018.11.29