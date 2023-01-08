#include<stdio.h>
#include<math.h>

int main(){
    float r,v,a;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the radius of sphere:\n");
    scanf("%f",&r);
    v=pow(r,3)*4*22/(7*3);
    a=4*r*r*22/7;
    printf("the volume of sphere is %.2f and its area is %.2f",v,a);
    return 0;
}