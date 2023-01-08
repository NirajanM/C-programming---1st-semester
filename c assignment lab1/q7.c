#include<stdio.h>
#include<math.h>

int main(){
    float r,h,v,tsa;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the radius and height:\n");
    scanf("%f%f",&r,&h);
    v=pow(r,2)*h*22/7;
    tsa=(r+h)*2*r*22/7;
    printf("the volume of cylinder is %.2f and\nits total surface area is %.2f",v,tsa);
    return 0;
}