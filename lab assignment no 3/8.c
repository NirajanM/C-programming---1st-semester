// Program to calculate the sum of first n natural numbers using loop.
#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter the nth term:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of first %d natural terms is : %d\n",n,sum);
    return 0;
}