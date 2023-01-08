// Write a program to evaluate Sum up to nth term.
// Sum=1+1/2+1/4+1/6+......
#include<stdio.h>

int main()
{
    int n;
    float sum=1;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter the nth term:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        sum+=1/(i*2.0);
    }
    printf("sum of %d terms in the series is : %f\n",n,sum);
    return 0;
}