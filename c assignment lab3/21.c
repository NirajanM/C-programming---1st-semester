//To input positive number and display it;s multiplication table.
#include<stdio.h>

void Mtable(int n)
{
    printf("***Multiplication table of %d***\n",n);
    for(int i=1;i<11;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
}
int main(){
    int n;
    printf("***assignment by Nirajan Malla***\n");
    printf("Enter the number you want multiplication table of :");
    scanf("%d",&n);
    Mtable(n);
    return 0;
}