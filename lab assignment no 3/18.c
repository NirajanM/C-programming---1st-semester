// Write a program to input a positive integer and find it is a prime number or not.
#include<stdio.h>

int main()
{
    int n,count=0;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the number to perform a prime check:");
    scanf("%d",&n);

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count!=0 || n==1)
    {
        printf("No, it is not a prime number");
    }
    else
    {
        printf("Yes, it is a prime number");
    }
    return 0;
}