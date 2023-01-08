#include<stdio.h>
#include<math.h>

int main(){
    float r,a,p;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the radius of circle:\n");
    scanf("%f",&r);
    a=pow(r,2)*22/7;
    p=2*r*22/7;
    printf("the area of circle is %.2f and its perimeter is %.2f",a,p);
    return 0;
}