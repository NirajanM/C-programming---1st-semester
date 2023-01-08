// Write a program to input a number and print its all factors.
#include<stdio.h>

int main()
{
    int n;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the number :");
    scanf("%d",&n);
    
    printf("factors of %d :",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
        else
        {}
    }
    return 0;
}