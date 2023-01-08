#include<stdio.h>

float frequency(float c,float l,float r);

int main()
{
    float F,C,L,R;
    printf("enter the ");
    printf("capacitance:");
    scanf("%f",&C);
    printf("inductance:");
    scanf("%f",&L);
    printf("resistance:");
    scanf("%f",&R);
    F=frequency(C,L,R);//function call
    printf("frequency is %.2f",F);
    return 0;
}

float frequency(float c,float l,float r){
    return ((1/(l*c))-((r*2)/(4*l*2)));
}
