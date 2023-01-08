#include <stdio.h>
#include <conio.h>
void main()
{
    int *p;
    int age = 17;
    p = &age;
    printf("\n Value of age is %d", age);
    printf("\n Increment on age is %d", ++age);
    printf("\n Address of age is %u", p);
    printf("\n Increment in pointer is %u", ++p);
    getch();
}
// int type pointer increament garda 4 le badxa
//char type ma chai 1 le badxa