// To input a positive integer and reverse it. For example: 1029 reverse number is 9201.
#include<stdio.h>

int main()
{
    int n,temp,reverse=0;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter a positive integer: ");
    scanf("%d",&n);
    temp=n;

    while(temp)
    {
        reverse=reverse*10+temp%10;
        temp=temp/10;
    }
    printf("reverse of digits of %d is %d",n,reverse);
    return 0;
}