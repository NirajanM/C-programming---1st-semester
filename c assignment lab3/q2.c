// Write a program to input marks of a student in 5subject and find his/her result.
//  [Note: pass marks is 35, Third div <45, Second Div <60, First Div <80, Dist<100]
#include<stdio.h>

int main(){
    float sub1,sub2,sub3,sub4,sub5,total;
    printf("enter the marks of student in 5 subjects :");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    total=(sub1+sub2+sub3+sub4+sub5)/5;
    if(total<35)
    {
        printf("you failed with percentage %f",total);
    }
    else
    {
        if(total<45)
        {
            printf("you secured 3rd division with percentage %f",total);
        }
        else if(total<60)
        {
            printf("you secured 2nd division with percentage %f",total);
        }
        else if(total<80)
        {
            printf("you secured 1st division with percentage %f",total);
        }
        else if(total<100)
        {
            printf("you secured distinction with percentage %f",total);
        }
        else
        {
            printf("wrong input somewhere,try again");
        }
    }
    return 0;
}