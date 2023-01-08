#include <stdio.h>
 
void main()
 
{
    int a[3][3];
    int i,j;
    printf("Input elements of matrix: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("You entered this matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}