#include<stdio.h>

int giveMeSum(int a,int b);

float giveDivision(float c,float d);

void printMulTable(int number){
    printf("*** Multiplication table of %d ***\n",number);
    
}
int main()
{
    int a=1,b=2;
    float c=10,d=4;
    int number;

    printf("enter the number:");
    scanf("%d",&number);

    // printf("%d\n",giveMeSum(a,b));
    // printf("%.2f",giveDivision(c,d));

    printMulTable(number);
    return 0;
}

int giveMeSum(int a,int b){
    return a+b;
}

float giveDivision(float c,float d){
    return c/d;
}