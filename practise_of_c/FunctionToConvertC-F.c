#include<stdio.h>
//(0°C × 9/5) + 32 = 32°F

float fahrenheit(float x){
    float y= (x*9/5)+32;
    return y;
}
int main(){
    int celcius;
    printf("enter the temperature in celcius : ");
    scanf("%d",&celcius);
    
    float result=fahrenheit(celcius);
     printf("the temperature in farenheit is %f ",result);
  
    return 0;
}