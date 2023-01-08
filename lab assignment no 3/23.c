// To input a number and check it isArmstrongnumber or not. [Note: Armstrong numbermeans 371=33+73+13, cube of each digit and finding their sum.]
#include<stdio.h>
#include<math.h>

int main()
{
    int n,temp,sum=0;
    printf("***assignment by Nirajan Malla***\n");
    printf("Enter a number to check whether it's armstrong number or not : ");
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        sum+=pow(temp%10,3);
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("it is a armstrong number");
    }
    else
    {
        printf("it is not a armstrong number");
    }
    return 0;
}