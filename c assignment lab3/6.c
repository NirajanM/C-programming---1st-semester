#include<stdio.h>
void display(int a)
{
    int count=0;
    for(int i=a;i;i--)
    {
        printf("%d\n",i);
        count+=i;
    }
    printf("And the sum is %d",count);
}

int main(){
    printf("***assignment by Nirajan Malla***\n");
    display(100);

    return 0;
}