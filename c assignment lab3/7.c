#include<stdio.h>
void display(int a)
{
    printf("Square root series upto 100:\n");
    for(int i=1;i*i<=a;i++)
    {
        printf("%d ",i*i);
    }
}

int main(){
    printf("***assignment by Nirajan Malla***\n");
    display(100);

    return 0;
}