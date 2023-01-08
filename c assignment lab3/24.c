// To input a positive number and find its factorial value
#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main(){
    int n,result;
    printf("***assignment by Nirajan Malla***\n");
    printf("Enter the number to calculate factorial :");
    scanf("%d",&n);
    result=factorial(n);
    printf("the factorial of %d is %d",n,result);
    return 0;
}