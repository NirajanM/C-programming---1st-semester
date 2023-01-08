#include<stdio.h>

// If a year is divisible by 4, 100 and 400 then it is a leap year.
// If a year is divisible by 4 but not divisible by 100 then it is a leap year
// If a year is not divisible by 4 then it is not a leap year
// If a year is divisible by 4 and 100 but not divisible by 400 then it is not a leap year

int main(){
    int year;
    printf("enter the year to perform leap year check : ");
    scanf("%d",&year);
    if(year%400==0){
        printf("this is a leap year");
    }
    else if(year%4==0 && year%100!=0){
        printf("this is a leap year");
    }
    else{
        printf("this is not a leap year");
    }

    return 0;
}