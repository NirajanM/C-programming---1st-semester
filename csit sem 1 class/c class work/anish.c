// Write a program that creates a 2D list having m number of rows and n
// number of columns.
//  All elements in the diagonal should be 1,
//  the elements above the diagonal should be 2
// and the elements below the diagonal should be 3.
//  Values for m and n should be taken from the user.
#include<stdio.h>

int main()
{
    int m;
    printf("enter the number of row and column: ");
    scanf("%d",&m);
    int arr[m][m];
    for(int i=0;i<m;i++)
    {
        arr[i][i]=1;
        for(int j=i+1;j<m;j++)
        {
            arr[i][j]=2;
            arr[j][i]=3;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}