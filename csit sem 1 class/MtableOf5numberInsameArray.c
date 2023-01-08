#include<stdio.h>

int main()
{
    int Mtable[10];
    int number[5];
    for(int i=0;i<5;i++)
    {
        printf("enter number%d:",i+1);
        scanf("%d",&number[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
            Mtable[j]=number[i]*(j+1);
        }
        printf("\n***Multiplication table of %d ***\n",i+1);
        for(int j=0;j<10;j++)
        {
           printf("%dx%d=%d\n",number[i],j+1,Mtable[j]);
        }
    }
    return 0;
}