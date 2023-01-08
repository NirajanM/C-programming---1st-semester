#include<stdio.h>
#include<math.h>

int main(){
    float s,a,b,c;
     printf("***assignment by Nirajan Malla***\n");
    printf("enter the value of side a,b and c:\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("the area of triangle is %f",sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}