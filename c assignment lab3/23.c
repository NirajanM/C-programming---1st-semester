// Calculate the factorial of an integer
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
    int result;
    printf("***assignment by Nirajan Malla***\n");
    result=factorial(5);
    printf("the factorial of 5 is %d",result);
    return 0;
}