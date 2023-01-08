// WAP to accept 10 number and print the sum of these numbers through function.

#include <stdio.h>

void printSum(int number[10]);

int main()
{
    int number[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter number%d:", i + 1);
        scanf("%d", &number[i]);
    }

    printSum(number);
    return 0;
}

void printSum(int number[10])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += number[i];
    }
    printf("sum of entered numbers is %d.", sum);
}