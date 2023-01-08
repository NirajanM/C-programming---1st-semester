// To input any two different numbers and print their common factors.
#include<stdio.h>

void printfactor(int n1,int n2)
{
    printf("common factors of %d and %d :",n1,n2);
    for(int i=1;i<=n1;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            printf("%d ",i);
        }
    }
}

int main(){
    int n1,n2;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter two numbers :\n");
    scanf("%d%d",&n1,&n2);

    printfactor(n1,n2);
    return 0;
}