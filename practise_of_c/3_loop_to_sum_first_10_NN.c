#include<stdio.h>

int main(){
    // using for loop

    int a=0;
    for(int i=1;i<=10;i++)
    {
        a+=i;
        // or
        // a=a+i;
    }
    printf("sum of first 10 natural number is %d",a);



    // using while loop

    // int a=0,i=1;
    // while(i<=10)
    // {
    //     a=a+i;
    //     i++;
    // }
    // printf("sum of first 10 natural number is %d",a);


    // using do while loop

    // int a=0,i=1;
    // do{
    //     a=a+i;
    //     i++;
    // }
    // while(i<=10);
    // printf("sum of first 10 natural number is %d",a);
    return 0;
}