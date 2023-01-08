// WAP to read line of text then count no. of vowels, digits and spaces.

#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], c;
    int i = 0, vowels = 0, digits = 0, spaces = 0;
    printf("enter text:");
    gets(text);
    while (text[i] != '\0')
    {
        if (text[i] == 'a' || text[i] == 'A' || text[i] == 'e' || text[i] == 'E' || text[i] == 'i' || text[i] == 'I' || text[i] == 'o' || text[i] == 'O' || text[i] == 'u' || text[i] == 'U')
            vowels++;

        if ((text[i] >= 48) && (text[i] <= 57))
            digits++;

        if (text[i] == 32)
            spaces++;
        i++;
    }

    printf("\nvowels:%d\ndigits:%d\nspaces:%d\n", vowels, digits, spaces);
    return 0;
}