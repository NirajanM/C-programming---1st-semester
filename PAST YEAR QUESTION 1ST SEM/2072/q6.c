// WAP to find the sum of each row of 3*2 matrix.

#include <stdio.h>

int main()
{
    int matrix[3][2];

    // storing data in matrix.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter element[%d][%d]:", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("sum of row %d of matrix is %d.\n", i + 1, matrix[i][0] + matrix[i][1]);
    }
    return 0;
}