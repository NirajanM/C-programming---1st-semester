// q2
// WAP to store price of 11 books and print it.
#include<stdio.h>

int main()
{
    int book[11];

    for(int i=0;i<11;i++)
    {
        printf("enter the price of book %d:",i+1);
        scanf("%d",&book[i]);
    }
    for(int i=0;i<11;i++)
    {
        printf("the price of book %d is:%d\n",i+1,book[i]);
    }
    return 0;
}