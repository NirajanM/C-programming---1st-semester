// WAP to display transpose of any given nxm matrix.
#include <stdio.h>
#include <conio.h>

void main()
{
    int mat[10][10], n, m, i, j, sum = 0;
    printf("enter the total number of rows and columns\n");
    scanf("%d%d", &n, &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("enter elements of matrix\n");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("transpose of entered nxm order matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }
    getch();
}