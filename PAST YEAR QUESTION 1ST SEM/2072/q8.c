// WAP to read all the number from the input file "value.dat" and store only even numbers in an output file named as "result.res".
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    FILE *ptr1;
    int number;
    if ((ptr = fopen("value.dat", "r")) == NULL || (ptr1 = fopen("result.res", "w")) == NULL)
    {
        printf("!error");
        exit(1);
    }

    while (fscanf(ptr, "%d", &number) != EOF)
    {
        if (number % 2 == 0)
        {
            fprintf(ptr1, "%d ", number);
        }
    }
    fclose(ptr);
    fclose(ptr1);

    return 0;
}