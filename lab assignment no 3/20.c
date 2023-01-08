//  Input a positive integer and find its sum of digits.[For example:-7629, sum of digits =7+6+2+9=24]
#include<stdio.h>

int main()
{
    int n,temp,sum=0;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter a positive integer: ");
    scanf("%d",&n);
    temp=n;

    while(temp)
    {
        sum+=temp%10;
        temp=temp/10;
    }
    printf("sum of digits of %d is %d",n,sum);
    return 0;
}