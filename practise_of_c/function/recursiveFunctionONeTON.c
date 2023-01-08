#include<stdio.h>

int giveSum(int n);

int main()
{
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    printf("sum from 1 to %d is %d",n,giveSum(n));
    return 0;
}

int giveSum(int n){
    if(n==1)
    {
        return 1;
    }
    else{
        return n+giveSum(n-1);
    }
}