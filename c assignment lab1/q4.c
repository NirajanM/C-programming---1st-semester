#include<stdio.h>

int main(){
    float l,b,a,p;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the length and breadth:\n");
    scanf("%f%f",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("the area of rectangle is %.2f and its perimeter is %.2f",a,p);
    return 0;
}