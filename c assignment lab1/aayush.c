#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c;
    float x1,x2,disc;
    printf("my name is aayush ghimire\n");
    printf("Enter cofficient of x*x (a):");
    scanf("%f",&a);
    printf("Enter cofficient of x (b):");
    scanf("%f",&b);
    printf("Enter constant (c):");
    scanf("%f",&c);
    disc=b*b-4*a*c;
    x1=(-b - sqrt(disc))/(2*a);
    x2=(-b + sqrt(disc))/(2*a);
    printf("Roots of Quadratic Equatioin are %.2f & %.2f",x1,x2);
}