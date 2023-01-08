// WAP to display sum of diagonal elements of any given 3x3 matrix.
#include <stdio.h>
#include <conio.h>

int main()
{
    int mat[3][3], i, j, sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter elements of matrix\n");
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                sum += mat[i][j];
        }
    }

    printf("sum of diagonal elements of matrix is %d", sum);

    getch();
    return 0;
}