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
    printf("***assignment by Nirajan Malla***\n");
    display(20);

    return 0;
}