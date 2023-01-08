// 14.Displayall square numbers from 100 to 500
#include<stdio.h>
void display(int a)
{
    printf("Square root series from 100 to 500:\n");
    for(int i=10;i*i<=a;i++)
    {
        printf("%d ",i*i);
    }
}

int main(){
    printf("***assignment by Nirajan Malla***\n");
    display(1000);

    return 0;
}