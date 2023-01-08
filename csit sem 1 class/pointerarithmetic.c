#include<stdio.h>

int main()
{
    int i=1;
    int*ptr=&i;
    printf("i=%d and ptr=%d\n",i,ptr);
    i++;
    ptr++;
    printf("i=%d and ptr=%d",i,ptr);
    printf("i=%d and ptr=%d",i,++ptr);

    return 0;
}