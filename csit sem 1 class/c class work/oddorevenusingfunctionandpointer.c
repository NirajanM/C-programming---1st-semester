#include<stdio.h>
int isEven(int *num);
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(isEven(&n))
    {
        printf("it is Even");
    }
    else
    {
        printf("it is odd");
    }
    return 0;
}
int isEven(int*num)
{
    if((*num)%2==0)
    {
        return 1;
    }
    return 0;
}