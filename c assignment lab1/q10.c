#include<stdio.h>
#include<math.h>

int main(){
    float p,t,r,i,variable;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter principle,time and rate:\n");
    scanf("%f%f%f",&p,&t,&r);
    variable=1+(r/100);
    i=p*(pow(variable,t)-1);
    printf("your compound interest is %.2f",i);
    return 0;
}