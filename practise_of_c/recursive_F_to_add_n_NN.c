#include<stdio.h>

int sum(int n)
{
    while(n!=0)
    {
     return n+sum(n-1);
    }
}

int main(){
    int n;
    printf("please enter the value of n : ");
    scanf("%d",&n);
    printf("the sum of %d natural number is %d",n,sum(n)); 
    return 0;
}