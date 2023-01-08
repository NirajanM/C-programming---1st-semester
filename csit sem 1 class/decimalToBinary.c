#include <stdio.h>
#include <stdlib.h>

 

int main()
{
    int num ,arr[15],i,j;
    printf("enter the decimal number:");
scanf("%d",&num);
    i=0;
    while (num>0)
    {
        arr[i]=num%2;
        num/=2;
        i++;
    }
    printf("binary number is :");
    for (j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    printf("\n");
    return 0;
}