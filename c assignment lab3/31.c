// To input any two numbers and print their first 10 common multiples.
#include <stdio.h>
void printcommonmultiples(int n1, int n2)
{
    printf("First 10 common multiples of %d and %d are:\n", n1, n2);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", n1 * n2 * i);
    }
}

int main()
{
    int n1, n2;
    printf("***Assignment by Nirajan Malla***\n");
    printf("Enter the numbers :\n");
    scanf("%d%d", &n1, &n2);
    printcommonmultiples(n1, n2);
    return 0;
}