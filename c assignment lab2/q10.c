#include<stdio.h>

int main(){
    float sa,commission;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter sales amount : ");
    scanf("%f",&sa);
    if(sa<0)
    {
        printf("invalid input");
    }
    else
    {
    if(sa>=1000)
    {
        commission=10*sa/100;
    }
    else
    {
        commission=5*sa/100;
    }
    printf("total commission on your sales amount is %.2f",commission);
    }
    return 0;
}