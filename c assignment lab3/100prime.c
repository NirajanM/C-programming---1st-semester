#include <stdio.h>

int isPrime(int a)
{
    if (a <= 1)
    {
        return 0;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n = 100;
    int result;
    printf("prime number from 1-100 :\n");
    for (int i = 1; i <= n; i++)
    {
        result = isPrime(i);
        if (result == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}