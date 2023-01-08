// To input a positive integer and reverse it. For example: 1029reverse number is 9201.
#include<stdio.h>
int reverse(int n,int *ptr)
{
    int LT=n%10;
    *ptr=n/10;
    return LT;
}

int main(){
    int n;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the number to reverse it :");
    scanf("%d",&n);
    printf("reverse of digit %d is :",n);
    while(n!=0)
    {
    printf("%d",reverse(n,&n));
    }
    return 0;
}