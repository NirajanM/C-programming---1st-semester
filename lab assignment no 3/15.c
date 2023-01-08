// Write a program to calculate X raised to the power Y.
#include<stdio.h>

int main()
{
    int x,y,result=1;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter the value of x and y:\n");
    scanf("%d%d",&x,&y);
    for(int i=0;i<y;i++)
    {
        result*=x;
    }
    printf("%d raised to the power %d is %d",x,y,result);
    return 0;
}