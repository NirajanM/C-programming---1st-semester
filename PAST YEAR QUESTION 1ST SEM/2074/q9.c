// WAP to find sum and average of 10 integer numbers stored in an array.
#include <stdio.h>

int main()
{
    int numbers[10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("enter number%d:", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("sum of entered integer numbers is %d and it's average is %.2f", sum, (float)sum / 10);

    return 0;
}