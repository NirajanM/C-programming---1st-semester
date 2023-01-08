#include <stdio.h>

int main()
{
    int row, column;
    int matrix[10][10];
    printf("enter the number of row of matrix you want:");
    scanf("%d", &row);
    printf("enter the number of column of matrix you want:");
    scanf("%d", &column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter element[%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("transpose of entered matrix is:\n");

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%2d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}