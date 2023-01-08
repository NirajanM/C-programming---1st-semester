// To input any 5 different positive numbers and find their factorial value.
#include<stdio.h>
int factorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}

int main(){
    int num[5],result;
    printf("***assignment by Nirajan Malla***\n");
    for(int i=0;i<5;i++)
    {
        printf("enter number %d:",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++)
    {
      result=factorial(num[i]);
      printf("the factorial of %d is %d\n",num[i],result);
    }
    return 0;
}