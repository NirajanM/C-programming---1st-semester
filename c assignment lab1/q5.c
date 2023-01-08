#include<stdio.h>
#include<math.h>

int main(){
    float l,a,p;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the length:\n");
    scanf("%f",&l);
    a=pow(l,2);
    p=4*l;
    printf("the area of square is %.2f and its perimeter is %.2f",a,p);
    return 0;
}