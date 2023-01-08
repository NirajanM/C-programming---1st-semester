#include<stdio.h>

// int giveFactorial(int number)
// {
//    int factorial=1;

//    for(number;number>0;number--)
//    {
//        factorial=factorial*number;
//    }
//    return factorial;
// }

//recursive function

int giveFactorial(int number){
    if(number==1)
    {
        return 1;
    }
    else 
    {
        return number*giveFactorial(number-1);
    }
}
int main()
{
    int number,factorial;
    printf("enter any number:");
    scanf("%d",&number);
    factorial=giveFactorial(number);
    printf("factorial of %d is %d",number,factorial);
    return 0;
}