#include<stdio.h>

int main(){
    float f,c;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the value of farenheit:");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("the value in celcius is %.2f",c);
    return 0;
}