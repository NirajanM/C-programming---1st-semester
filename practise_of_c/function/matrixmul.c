#include <stdio.h>
 
void takeinput(int row, int column, int mat[row][column])
 
{
 
  for (int i = 0; i < row; i++)
 
  {
 
    for (int j = 0; j < column; j++)
 
    {
 
      printf("enter mat[%d][%d]:", i, j);
 
      scanf("%d", &mat[i][j]);
    }
  }
}
 
void printMatrix(int row, int column, int mat[row][column])
 
{
 
  for (int i = 0; i < row; i++)
 
  {
 
    for (int j = 0; j < column; j++)
 
    {
 
      printf("%d ", mat[j][i]);
    }
 
    printf("\n");
  }
}
 
int main()
 
{
 
  printf("***please check rules of multiplication of matrix first***\n");
 
  int i, j, k;
 
  printf("enter the number of row and column of a matrix:\n");
 
  scanf("%d%d", &i, &j);
 
  printf("enter the number of column of second matrix:\n");
 
  scanf("%d", &k);
 
  int matA[i][j];
 
  int matB[j][k];
 
  int matC[i][k];
 
  printf("for first matrix\n");
 
  takeinput(i, j, matA);
 
  printf("for second matrix\n");
 
  takeinput(j, k, matB);
 
  printf("***multiplication of given two matrix is***\n");
 
  //storing multiplication in another matrix
 
  int ro = 0;
 
  for (int row = 0; row < i; row++)
 
  {
 
    for (int column = 0; column < k; column++)
 
    {
 
      matC[row][column] = 0;
 
      for (int co = 0; co < i; co++)
 
      {
 
        matC[row][column] += matA[ro + row][co] * matB[co][ro + column];
      }
    }
  }
 
  printMatrix(i, k, matC);
 
  return 0;
}