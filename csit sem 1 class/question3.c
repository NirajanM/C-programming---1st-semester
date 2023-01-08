//q3
// WAP to create a array of room 10 (arr[10]) and store the result of multiplication table of 5 in it and use it to print the table;
#include<stdio.h>

int main()
{
    for(int i=0; i<10 ; i++)
    {
        printf("5x%d=%d\n",i+1,5*(i+1));
    }
    return 0;
}