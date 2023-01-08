#include<stdio.h>

float giveFarenheit(float celcius);

int main()
{
    float celcius,farenheit;
    printf("enter celcius:");
    scanf("%f",&celcius);
    farenheit=giveFarenheit(celcius);
    printf("%.2f celcius into farenheit is %.2f",celcius,farenheit);
    // printf("%.2f celcius into farenheit is %.2f",giveFarenheit(celcius));
    return 0;
}

float giveFarenheit(float celcius){
    return (float)((celcius*9/5)+32);
}