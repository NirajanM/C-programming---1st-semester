#include<stdio.h>//library
#include<conio.h>//library

// printf(); function
// scanf();

void sum(int a, int b);//prototype

int main()
{
    //declaring variable
    // different types of variable
    // int,float,double,char,void ...... 
    // int - stores integer number(no decimal)
    // float - stores floating number(including decimal)
    // char -stores character
    // every character have it's own ASCII value(integer value)
    int a=4,b=5;
    float Currency = 12.234556;
    int currency = 12.234556;
    char c='r';
    // printf("hello world");
    // printf("%d %d %.4f %d %c",a,b,Currency,currency,c);

    // steps creating own function
    // 1- declare prototype
    // 2- define it
    // 3- call it whenever needed

    sum(a,b);//function call
    return 0;
}

//function definition
void sum(int a, int b){
    printf("%d",a+b);
}
