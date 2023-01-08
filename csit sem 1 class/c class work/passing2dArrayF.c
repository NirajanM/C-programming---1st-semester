#include<stdio.h>
void print(int **arr)
{
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*((*arr+i)+j));
        }printf("\n");
    }
}
int main()
{
    int arr[2][3]={{1,2,3},{3,4,5}};
    print((int **)arr);
    return 0;
}