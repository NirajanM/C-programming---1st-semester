#include<stdio.h>
void display(int a)
{
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("And their sum is %d",sum);
}

int main(){
    printf("***assignment by Nirajan Malla***\n");
    display(100);

    return 0;
}