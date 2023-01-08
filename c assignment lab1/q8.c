#include<stdio.h>
#include<math.h>

int main(){
    float r,h,l,v,tsa;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the radius, height of a cone:\n");
    scanf("%f%f",&r,&h);
    l=sqrt(r*r+h*h);
    v=pow(r,2)*h*22/(7*3);
    tsa=(l+r)*r*22/7;
    printf("the volume of cone is %.2f and\nits total surface area is %.2f",v,tsa);
    return 0;
}