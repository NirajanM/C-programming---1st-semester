// Write a program to calculate discount. If purchased amount is greater than or equal to 1000, discount is 5% .
#include <stdio.h>

int main()
{
    float discount = 0, cp;
    printf("enter the cost price :");
    scanf("%f", &cp);
    if (cp >= 1000)
    {
        discount = 5 * cp / 100;
    }
    printf("discount:%f.", discount);
    return 0;
}