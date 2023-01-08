#include<stdio.h>

float average(float x, float y, float z){
 return (x+y+z)/3;
}

int main(){
    int x,y,z;

    printf("enter the value of first number : ");
    scanf("%d",&y);

    printf("enter the value of second number : ");
    scanf("%d",&z);

    printf("enter the value of third number : ");
    scanf("%d",&x);

    float result=average(x,y,z);

    printf("the average of given numbers is %f",result);
    
    return 0;
}