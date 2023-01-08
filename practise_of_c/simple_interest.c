#include<stdio.h>

int main(){
    float p;
    int t,r;
    printf("enter principle in RS,time in year and rate in percentage respectively : \n");
    scanf("%f %d %d",&p,&t,&r);
    printf("your simple interest in RS is :%.3f",(p*t*r)/100);
    return 0;
}