#include<stdio.h>

int main()
{
    int sum=0;
    printf("***assignment by Nirajan Malla***\n");
    for(int i=1;i<=100;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("\n\nAnd their sum is %d",sum);

    return 0;
}