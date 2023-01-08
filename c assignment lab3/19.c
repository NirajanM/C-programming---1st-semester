// Display the series: 1  5   9   13  17 Nth Term
//                     1 1+4 5+4 9+4 13+4
#include<stdio.h>

void display(int n)
{
    int a=1;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a);
        a=a+4;
    }
}

int main(){
    int n;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the nth term:\n");
    scanf("%d",&n);
    display(n);   
    return 0;
}