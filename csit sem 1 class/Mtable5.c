#include <stdio.h>
int main()
{
    // int multiple[10];
    int number[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number%d :", i + 1);
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%dx%d=%d\n",number[i],j+1,number[i]*(j+1));
            // multiple[j] = number[i] * (j+1);
            // printf("\n%d * %d = %d\n", number[i], j+1, multiple[i]);
        }
        printf("\n");
    }
    return 0;
}