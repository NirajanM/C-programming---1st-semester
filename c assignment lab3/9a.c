// 1
// 1    2
// 1    2    3
// 1    2    3    4
// 1    2    3    4    5
#include<stdio.h>
void display(int a)
{
    if(a==0)
    {
        printf("\n");
    }
    else
    {
    display(a-1);
    for(int i=1;i<=a;i++)
    {
         printf("%d\t",i);
    }
    printf("\n");
    }
}

int main(){
    printf("***assignment by Nirajan Malla***\n");
    display(5);

    return 0;
}