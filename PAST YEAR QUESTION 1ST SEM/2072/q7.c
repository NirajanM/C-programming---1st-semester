// WAP to find sum and average of n numbers entered from the keyboard using dynamic memory allocation to create array to store these n numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    int sum = 0;

    printf("enter how many numbers you want to input:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter number%d:", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += ptr[i];
    }

    free(ptr);
    printf("\nsum of entered numbers is %d\nand it's average is %.2f", sum, (float)sum / n);
    return 0;
}