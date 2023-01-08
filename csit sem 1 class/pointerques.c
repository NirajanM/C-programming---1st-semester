#include<stdio.h>

void giveResult(int a,int b,int *ptr1, int *ptr2){
    *ptr1=a+b;
    *ptr2=a*b;
}

int main()
{
    int a=12,b=14;
    int sum,mul;
    giveResult(a,b,&sum,&mul);
    printf("sum is %d and mul is %d\n",sum,mul);
    return 0;
}