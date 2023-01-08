// To input a positive integer and reverse it. For example: 1029reverse number is 9201.
#include<stdio.h>
int reverse(int n)
{
    int digit,rev=0;
    do
    {
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
    }while(n>0);
    return rev;
}

int main(){
    int n,result;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the number to reverse it :");
    scanf("%d",&n);
    printf("reverse of digit %d is :",n);
    result=reverse(n);
    printf("%d",result);
    
    return 0;
}