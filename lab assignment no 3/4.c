// Display the series of even number up to N.
#include<stdio.h>

int main()
{
    int n;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter the last number:");
    scanf("%d",&n);
    printf("even number upto %d are:\n",n);
    for(int i=0;i<=n/2;i++)
    {
        printf("%d ",i*2);
    }
    return 0;
}