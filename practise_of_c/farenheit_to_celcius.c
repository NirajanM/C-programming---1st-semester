#include<stdio.h>
//(0°C × 9/5) + 32 = 32°F

int main(){
    float celcius;
    printf("enter the value of temperature in celcius: ");
    scanf("%f",&celcius);
    printf("the conversion into farenheit is %.3f",(celcius*9/5)+32);
    return 0;
}