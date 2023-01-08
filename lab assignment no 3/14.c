// Write a program to input a positive number and find its factorial value.
#include<stdio.h>

int main()
{
    int n,factorial=1;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter a positive number :");
    scanf("%d",&n);
    while(n)
    {
        factorial*=n;
        n--;
    }
    printf("the factorial is %d",factorial);
    return 0;
}