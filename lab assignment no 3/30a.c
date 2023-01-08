#include<stdio.h>

int main()
{
    printf("***Assignment by Nirajan Malla***\n");
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            printf("%d ",(i*11-i)+j);
        }
        printf("\n");
    }
    return 0;
}