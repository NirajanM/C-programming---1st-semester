#include<stdio.h>

int main(){
    float sa,commission=0;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter sales amount : ");
    scanf("%f",&sa);
    if(sa<=5000)
    {
       commission=sa*5/100;
    }
    else if(sa<=10000)
    {
       commission=sa*10/100;
    }
    else
    {
       commission=sa*15/100;
    }
    printf("commission on your sales amount is : %.2f",commission);
    return 0;
}