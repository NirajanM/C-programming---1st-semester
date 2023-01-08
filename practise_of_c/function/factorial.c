#include<stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    printf("factorial of %d is %d \n",n,factorial(n));
    return 0;
}

int factorial(int n){
    // n*(n-1)*(n-2)*1

    if(n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

    // int factorial=1;
    // for(n;n>0;n--)
    // {
    //     factorial*=n;
    // }
    // return factorial;
}