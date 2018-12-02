#include<stdio.h>
int main(void){
    int m;
    scanf("%d",&m);
    float t1,t2;
    t1 = 50+m/3;
    t2 = m*12/10;
    if(t1<t2) printf("Bike");
    else if(t1>t2) printf("Walk");
    else printf("All");
    return 0;
}
//2018.12.02