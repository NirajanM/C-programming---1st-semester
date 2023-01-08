//To input positive number and display it;s multiplication table.
#include<stdio.h>

void Mtable(int n)
{
    printf("***Multiplication table of %d***\n",n);
    for(int i=1;i<11;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    printf("\n");
}
int main(){
    int num[5];
    for(int i=0;i<5;i++)
    {
        printf("enter number%d :",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++)
    {
       Mtable(num[i]);
    }

    return 0;
}