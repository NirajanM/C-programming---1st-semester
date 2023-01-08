// WAP to accept 10 numbers and show them with using pointer.
#include <stdio.h>

int main()
{
    int number[10];
    int *ptr = number;
    for (int i = 0; i < 10; i++)
    {
        printf("enter number%d:", i + 1);
        scanf("%d", &number[i]);
    }

    printf("you entered:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}