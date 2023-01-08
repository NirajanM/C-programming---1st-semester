#include<stdio.h>

int main(){
    int number;
    float rate,ta,discount,na;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter number of books sold and its rate: ");
    scanf("%d%f",&number,&rate);
    ta=rate*number;
    if(ta>=1000)
    {
        discount=10*ta/100;
    }
    else
    {
        discount=5*ta/100;
    }
    printf("total amount is %.2f\n",ta);
    printf("discount amount is %.2f\n",discount);
    na=ta-discount;
    printf("Net amount is %.2f",na);

    return 0;
}