#include<stdio.h>


int main(){
    int num,factorial=1;
    printf("enter the number to calculate factorial: ");
    scanf("%d",&num);

    //using for loop

    // for(int i=1;i<=num;i++)
    // {
    //     factorial*=i;
    // }


    //using while loop
    int i=1;
    while(i<=num)
    {
        factorial=factorial*i;
        i++;
    }
    printf("the factorial of %d is %d",num,factorial);
    return 0;
}