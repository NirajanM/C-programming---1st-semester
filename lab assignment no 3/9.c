// Display the series of even number up to 100 in descending order and find their sum too
#include<stdio.h>

int main()
{
    int sum=0;
    printf("***Assignment by Nirajan Malla***\n");
    for(int i=50;i;i--)
    {
        printf("%d ",i*2);
        sum+=i*2;
    }
    printf("\n\nAnd there sum is %d",sum);
    return 0;
}