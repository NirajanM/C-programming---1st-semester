#include<stdio.h>

// pattern--
// *
// ***
// *****
// 1-1
// 2-3
// 3-5
// 4-7
// n-(2n-1)
void print(int row)
{
    if(row==1)
    {
        printf("*\n");
        return;
    }

    print(row-1);

    for(int i=0;i<(2*row-1);i++)
    {
        printf("*");
    }
    printf("\n");
}

int main(){
    int row;
    printf("enter the number of row you want : ");
    scanf("%d",&row);
    print(row);
    return 0;
}