// To input a positive integer and find it isPalindromenumber or not. [Note: palindromenumber remains same even after reversing. Example: 494]
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
    if(reverse==n)
    {
        printf("it is a palindrome number");
    }
    else
    {
        printf("it is not a palindrome number");
    }
    return 0;
}