#include<stdio.h>

int main()
{
    int a[3];
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter element [%d][%d] :",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter element [%d][%d] :",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            mat3[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}