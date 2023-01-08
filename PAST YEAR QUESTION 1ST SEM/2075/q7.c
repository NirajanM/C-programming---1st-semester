// WAP to calculate sum of first 10 odd numbers.
#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += 2 * i - 1;
    }
    printf("sum of first 10 odd number is %d.", sum);
    return 0;
}