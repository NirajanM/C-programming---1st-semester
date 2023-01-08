#include<stdio.h>

int main(){
    float cp,sp;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter cost price(cp) and selling price(sp) :\n");
    scanf("%f%f",&cp,&sp);
    if(cp>sp)
    {
        printf("faced loss of RS %.2f",cp-sp);
    }
    else if(cp<sp)
    {
        printf("gained profit of RS %.2f",sp-cp);
    }
    else
    {
        printf("no loss or gain faced");
    }
    return 0;
}