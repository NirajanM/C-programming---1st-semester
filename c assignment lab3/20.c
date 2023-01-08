// Display the multiplication table of given number.
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
    printf("***assignment by Nirajan Malla***\n");
    Mtable(7);
    return 0;
}