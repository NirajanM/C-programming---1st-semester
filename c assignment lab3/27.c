// To input a number and print its all factors.
// Factors of a number are defined as numbers that divide the original number evenly or exactly.
//  The meaning of factor is a whole number that can divide a greater number evenly.
#include<stdio.h>

void printfactor(int n)
{
    printf("factors of %d :",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
        else
        {}
    }
}

int main(){
    int n;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the number :");
    scanf("%d",&n);

    printfactor(n);
    return 0;
}