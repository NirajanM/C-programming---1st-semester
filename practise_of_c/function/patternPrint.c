#include<stdio.h>

// ***
// ***
// ***

int main()
{
    int row=4,column=3;
    for(int i = 0 ; i < row ; i++)
    {
        for(int j=0 ; j<column ;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}