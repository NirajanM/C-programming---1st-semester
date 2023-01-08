// WAP to check whether a number entered is even or odd.
#include <stdio.h>

int main()
{
    int number;
    printf("enter any number:");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("it is even number.");
    }
    else
    {
        printf("it is odd number.");
    }
    return 0;
}