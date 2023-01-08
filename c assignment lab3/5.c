#include<stdio.h>
void display(int a)
{
    for(int i=2;i<=2*a;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}

int main(){
    int n;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the nth term of even number series :");
    scanf("%d",&n);
    display(n);

    return 0;
}