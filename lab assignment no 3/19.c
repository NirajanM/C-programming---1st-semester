// Write a program to Display Fibonacci series.[First few numbers of Fibonacci series are 0,1, 1, 2, 3, 5, 8 etc, Except first two terms in sequence every other term is the sum of twoprevious terms, For example 8 = 3 + 5 (addition of 3, 5)].
#include<stdio.h>

int main()
{
    int n,a=0,b=1,sum;
    printf("***assignment by Nirajan Malla***\n");
    printf("how many terms do you want to see ?:");
    scanf("%d",&n);
    sum=a+b;
    printf("fibonacci series:\n");
    if(n<=1)
    {
        printf("0");
    }
    else if (n<=2)
    {
        printf("0, 1,");
    }
    else
    {
        printf("0, 1, ");
        for(int i=0;i<(n-2);i++)
        {
            printf("%d, ",sum);
            a=b;
            b=sum;
            sum=a+b;
        }
    }  
    return 0;
}