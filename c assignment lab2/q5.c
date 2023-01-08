#include<stdio.h>

int main(){
    int n;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter the number : ");
    scanf("%d",&n);
    if(n%5==0 || n%7==0)
    {
        printf("given number is divisible by 5 or 7 or both");
    }
    else
    {
        printf("given number is not divisible by both 5 or 7");
    }
    return 0;
}