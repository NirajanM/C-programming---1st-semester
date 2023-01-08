// WAP to find product of two integers using your own function
#include <stdio.h>
int giveProduct(int integer1, int integer2);
int main()
{
    int integer1, integer2;
    printf("enter integer1 and integer2 respectively:\n");
    scanf("%d%d", &integer1, &integer2);
    printf("product of 2 integers is %d", giveProduct(integer1, integer2));
    return 0;
}

int giveProduct(int integer1, int integer2)
{
    return integer1 * integer2;
}