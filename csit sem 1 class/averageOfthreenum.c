#include<stdio.h>

float averageOfThree(float*,float*,float*);

int main()
{
    float a,b,c;
    printf("enter three number:\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("average of 3 number is %.2f\n",averageOfThree(a,b,c));
    printf("a=%f,b=%f,c=%f",a,b,c);
    return 0;
}

float averageOfThree(float a,float b,float c){
    a=122;
    b=123;
    c=124;
    return (a+b+c)/3;
    
}