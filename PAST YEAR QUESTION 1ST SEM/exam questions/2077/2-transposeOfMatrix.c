#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row,column;
    printf("enter the number of row and columm of a matrix:");
    scanf("%d%d",&row,&column);
    int *ptr1;
    int *ptr2;
    //dynamically allocating 2d-array to store matrix
    ptr1 = (int*)malloc(row*column*sizeof(int));

    //storing data in matrix(array) using loop
    for(int i=0 ; i<row*column ; i++)
    {
        printf("enter matrix element:");
        scanf("%d",ptr1+i);
        
    }

    //printing entered array
    printf("matrix entered:\n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            printf("%2d ",*(ptr1+i+j));
        }
        printf("\n");
    }

    //printing its transpose
    printf("its transpose:\n");
    for(int i=0 ; i<column ; i++)
    {
        for(int j=0 ; j<row ; j++)
        {
            printf("%2d ",*(ptr1+j+i));
        }
        printf("\n");
    }
    
    return 0;
}