#include<stdio.h>

int main()
{
    float book[10];
    for(int i=0;i<10;i++)
    {
        printf("enter the price of book%d:",i+1);
        scanf("%f",&book[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("The price of book%d is %.2f\n",i+1,book[i]);
    }
    return 0;
}