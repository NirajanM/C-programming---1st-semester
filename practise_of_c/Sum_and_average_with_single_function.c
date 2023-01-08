#include<stdio.h>

void saa(int a,int b,int *sum,float *avg)
{
    *sum=a+b;
    *avg=(float)(*sum)/2;
}

int main(){
    int a,b,sum;
    float avg;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    saa(a,b,&sum,&avg);
    printf("the sum and the average is %d and %.2f",sum,avg );
    return 0;
}