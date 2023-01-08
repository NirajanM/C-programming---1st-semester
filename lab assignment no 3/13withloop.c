// Write a program to input a positive integer and find it is a square number or not.
#include<stdio.h>
#include<math.h>

int main()
{
    int n,count=0;
    printf("enter a positive integer :");
    scanf("%d",&n);
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            count++;
            break;
        }
    }
    if(count==1)
    {
        printf("yes, it is a square number");
    }
    else
    {
        printf("No, it is not a square number");
    }

    return 0;
}