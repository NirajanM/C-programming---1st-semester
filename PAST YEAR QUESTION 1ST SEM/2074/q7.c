// WAP that computes the sum of digits of a given integer number.
#include <stdio.h>

int main()
{
    int number, sum = 0, rem = 0;
    printf("enter any integer number:");
    scanf("%d", &number);

    while (number > 0)
    {
        rem = number % 10;
        sum += rem;
        number = number / 10;
    }
    printf("sum of digits of given integer number is %d.", sum);
    return 0;
}