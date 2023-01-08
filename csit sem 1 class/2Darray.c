#include<stdio.h>

int main()
{
    int n[2];
    // int number[10];
    int a[2][10];//think it as a matrix

    // for(int i=0;i<10;i++)
    // {
    //     number[i]=7*(i+1);
    // }

    printf("enter two number:\n");
    scanf("%d%d",&n[0],&n[1]);
    //use nested loop for 2d array
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<10;j++)
        {
            a[i][j]=n[i]*(j+1);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%dx%d=%d\n",n[i],j+1,a[i][j]);
        }
        printf("\n");
    }
    return 0;
}