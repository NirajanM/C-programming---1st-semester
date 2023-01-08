#include <stdio.h>
#include <conio.h>

int giveSum(int);
int main()
{
    // sum and average of first n natural numbers.
    int number;
    printf("enter the value of N:");
    scanf("%d", &number);
    printf("the sum of first %d natural number is %d.\nAnd it's average is %d", number, giveSum(number), giveSum(number) / number);
    return 0;
}

int giveSum(int number)
{
    // int i = 1, sum = 0;
    // while (i <= number)
    // {
    //     sum += i;
    //     i++;
    // }
    // return sum;
    return number * (2 + (number - 1)) / 2;
}