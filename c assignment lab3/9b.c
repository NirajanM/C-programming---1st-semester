// 1
// 2    2
// 3    3    3
// 4    4    4    4
#include<stdio.h>
void display(int a)
{
    if(a==0)
    {
        return;
    }
    else
    {
        display(a-1);
        for(int i=1;i<=a;i++)
        {
            printf("%d\t",a);
        }
        printf("\n");
        a++;
    }
}

int main(){
    printf("***assignment by Nirajan Malla***\n");
    display(4);

    return 0;
}