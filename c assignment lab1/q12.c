#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,d,x1,x2;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the value of a,b & c:\n");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("the value of x1 is %.2f and x2 is %.2f",x1,x2);
    return 0;
}