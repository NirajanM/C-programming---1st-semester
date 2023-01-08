#include<stdio.h>

int main(){
    float n1,n2;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter two numbers : ");
    scanf("%f%f",&n1,&n2);
    if(n1>n2)
    {
        printf("%.2f is greater than %.2f",n1,n2);
    }
    else
    {
        printf("%.2f is greater than %.2f",n2,n1);
    }
    return 0;
}