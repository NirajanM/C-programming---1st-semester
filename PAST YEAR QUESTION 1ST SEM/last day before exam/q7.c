// WAP to display sum of each columns of any given nxm matrix.
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
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum += mat[j][i];
        }
        printf("sum of column%d:%d\n", i + 1, sum);
        sum = 0;
    }
    getch();
}