// To input a positive number and display its multiplication table.
#include<stdio.h>

int main()
{
    int n;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter a positive integer: ");
    scanf("%d",&n);

    printf("***Multiplication table of %d***\n");
    for(int i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}