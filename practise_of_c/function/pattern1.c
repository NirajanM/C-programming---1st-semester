#include<stdio.h>
#include<conio.h>

 

int main()
{
    int i,j, n=6;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t*");
            
        }
        printf("\n");
    }
    getch();
    return 0;
}