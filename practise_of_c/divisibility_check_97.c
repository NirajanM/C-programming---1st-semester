#include<stdio.h>

int main(){
    int number;
    printf("enter the integer number to perform divisibility check: ");
    scanf("%d",&number);
    if(number%97==0)
    {
        printf("it is divisible by 97");
    }
    else
    {
         printf("it is not divisible by 97");
    }
    return 0;
}