#include<stdio.h>

int main()
{
    int mat[2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("enter element [%d][%d] :",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    // 2 3
    // 4 5
    // 2*5-4*3

    int determinent = mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];
    printf("%d",determinent);
    return 0;
}