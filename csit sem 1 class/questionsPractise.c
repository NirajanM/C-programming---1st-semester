//WAP to store 10 even number creating a array of integer type and print it using another loop.

#include<stdio.h>

int main()
{
    // int even[10]={2,4,6,8,10,12,14,16,18,20};
    int even[10];

    for(int i=0 ; i<10 ; i++)
    {
        printf("enter number:");
        scanf("%d",&even[i]);
    }
    
    for( int i=0 ; i<10 ; i++ )
    {
        printf("%d\n",even[i]);
    }

    return 0;
}