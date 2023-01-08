#include<stdio.h>

int main()
{
    int Mtable[10];
    int n;
    printf("enter the number to display it's Mutliplication table:");
    scanf("%d",&n);
    printf("\n\n\n***Multiplication table of %d***\n",n);
    for(int i=0;i<10;i++)
    {
        Mtable[i]=n*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("%dx%d=%d\n",n,i+1,Mtable[i]);
    }
    return 0;
}