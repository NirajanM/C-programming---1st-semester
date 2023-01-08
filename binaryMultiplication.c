#include <stdio.h>
int addition(long binary1, long binary2);
int multiplication(long binary1, long binary2);
int main()
{

    long binary1, binary2;
    printf("Enter the first binary number: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number: ");
    scanf("%ld", &binary2);
    printf("addition of entered binary numbers is %d\n", addition(binary1, binary2));
    printf("multiplication of entered binary numbers is %d", multiplication(binary1, binary2));
    return 0;
}
int addition(long binary1, long binary2)
{
    int i = 0, remainder = 0;
    int sum[25];
    int binarySum = 0;
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binarySum = binarySum * 10 + sum[i--];

    return binarySum;
}
int multiplication(long binary1, long binary2)
{
    int digit, factor = 1, multiply = 0;
    while (binary2 != 0)
    {
        digit = binary2 % 10;

        if (digit == 1)
        {
            binary1 = binary1 * factor;
            multiply = addition(binary1, multiply);
        }
        else
            binary1 = binary1 * factor;

        binary2 = binary2 / 10;
        factor = 10;
    }
    return multiply;
}
