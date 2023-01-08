// To input a positive integer and find it is Palindromenumber or not. [Note: palindrome number remains same even after reversing. Example: 494]
#include<stdio.h>
int reverse(int n)
{
    int a,rev=0;
    do
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }while(n!=0);
    return rev;
}

int main(){
    int number,result;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter any positive integer to check whether it is palindromenumber or not:");
    scanf("%d",&number);
    result=reverse(number);
    if(number==result)
    {
        printf("the given number is palindromenumber");
    }
    else
    {
        printf("the given number is not a palindromenumber");
    }
    return 0;
}