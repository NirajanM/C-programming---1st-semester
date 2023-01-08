// WAP to add two matrices using array.

#include <stdio.h>
int main()
{
    int row, column;
    int matrix1[10][10], matrix2[10][10], sum[10][10];
    printf("enter the number of row and column of matrix:\n");
    scanf("%d%d", &row, &column);
    printf("for first matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter element[%d][%d]:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("for second matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter element[%d][%d]:", i, j);
            scanf("%d", &matrix2[i][j]);
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("addition of 2 matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%2d", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}