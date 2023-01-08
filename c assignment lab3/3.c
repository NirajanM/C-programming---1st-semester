#include<stdio.h>
void display(int a)
{
    for(int i=0;i<=a;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}

int main(){
    printf("***assignment by Nirajan Malla***\n");
    display(100);

    return 0;
}