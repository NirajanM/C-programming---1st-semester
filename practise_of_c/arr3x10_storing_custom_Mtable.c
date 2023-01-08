#include<stdio.h>

int main(){
    int arr[3][10];
    int add[3];
    for(int i=0;i<3;i++)
    {
    printf("multiplication table number %d in 3 is of:",i+1);
    scanf("%d",&add[i]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            arr[i][j]=add[i]*(j+1);
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("\n****multiplication table of %d****\n",add[i]);
        for(int j=0;j<10;j++)
        {
           printf("%dx%d=%d\n",add[i],(j+1),arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}