// Display the series of even number up to Nth term
#include<stdio.h>

int main()
{
    int n;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter the nth term:");
    scanf("%d",&n);
    printf("even number of %d terms are are:\n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",i*2);
    }
    return 0;
}