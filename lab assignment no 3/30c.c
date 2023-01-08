#include<stdio.h>

int main()
{
    printf("***Assignment by Nirajan Malla***\n");
    for(int i=1;i<6;i++)
    {
        for(int j=i;j<6;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
        for(int k=0;k<i;k++)
        {
            printf("\t");
        }
    }
    return 0;
}