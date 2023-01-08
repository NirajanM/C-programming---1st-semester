/*
4. Find the value of following expression. Use the value initially assigned to the variables for each
expression.
int a=8, b=5;
float x=0.005, y=-0.01;
i. 2*((a/5)+4*(b-3))%(a+b+2));
ii. (x>y)&&(a>0)11(b<5);
iii. (a>b)?a:b;
*/
#include <stdio.h>

int main()
{
    int a = 8, b = 5;
    float x = 0.005, y = -0.01;
    float result = (a > b) ? a : b;
    printf("%f", result);
    return 0;
}