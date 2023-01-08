// Display the series: 1  5  9   13   17  nth Term
#include<stdio.h>

int main()
{
    int n;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",1+4*i);
    }
    return 0;
}