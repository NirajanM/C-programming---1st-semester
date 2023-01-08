// 17)Input sales amount of a sales person and find 10% commission amount if the sales amount>=5000. 
#include<stdio.h>

int main(){
    float sa,commission=0;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter sales amount : ");
    scanf("%f",&sa);
    if(sa>=5000)
    {
       commission=sa*10/100;
    }
    else
    {}
    printf("commission on your sales amount is : %f",commission);
    return 0;
}