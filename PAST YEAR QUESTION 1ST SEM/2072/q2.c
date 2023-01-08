// WAP using switch statement to display EXCELLENT,VERY GOOD,GOOD,SATISFACTORY,or FAIL if the user enters A,B,C,D,E respectively.

#include <stdio.h>

int main()
{
    char input;
    printf("enter any of these character:\nA,B,C,D,E,F(case sensitive):\n");
    scanf("%c", &input);

    switch (input)
    {
    case 'A':
        printf("EXCELLENT");
        break;
    case 'B':
        printf("VERY GOOD");
        break;
    case 'C':
        printf("GOOD");
        break;
    case 'D':
        printf("SATISFACTORY");
        break;
    case 'E':
        printf("FAIL");
        break;
    default:
        printf("wrong input!");
    }
    return 0;
}