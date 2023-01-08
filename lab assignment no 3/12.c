// C Program to Calculate the Sum of Odd & Even Numbers up to nth term.
#include<stdio.h>

int main()
{
    int n,evensum=0,oddsum=0;
    printf("***Assignment of Nirajan Malla***\n");
    printf("enter nth term:");
    scanf("%d",&n);
    for(int i=0;i<=2*n;i++)
    {
        if(i%2==0)
        {
            evensum+=i;
        }
        else
        {
            oddsum+=i;
        }
    }
    printf("sum of odd numbers and even numbers upto %d term are : %d and %d",n,oddsum,evensum);
    return 0;
}