// WAP to read and print data stored in a file input.txt
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *fptr;
    if ((fptr = fopen("input.txt", "r")) == NULL)
    {
        printf("error!");
        exit(1);
    }
    while ((c = fgetc(fptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fptr);
    return 0;
}