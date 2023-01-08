// Program to calculate sum of maximum of 10 numbers. Negative numbers are skipped from calculation
#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("***Assignment by Nirajan Malla***\n");
    for(int i=0;i<10;i++)
    {
        printf("enter number %d:",i+1);
        scanf("%d",&n);
        if(n<0)
        {
            continue;
        }
        else
        {
            sum+=n;
        }
    }
    printf("sum of entered numbers is %d",sum);
    return 0;
}