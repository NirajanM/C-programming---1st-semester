#include<stdio.h>

float force(int mass)
{
    return (float)mass*9.8;
}
int main(){
    float mass;
    printf("enter the mass of object : ");
    scanf("%f",&mass);
    printf("the force of attraction of earth on the object is %f Newton",force(mass));
    return 0;
}