#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,d;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the value of side a,b and angle of c in degree:\n");
    scanf("%f%f%f",&a,&b,&c);
    d=0.5*a*b*sin((c*22)/(180*7));
    printf("the area of triangle is %.2f",d);
    return 0;
}