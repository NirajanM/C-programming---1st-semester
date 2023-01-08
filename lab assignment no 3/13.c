// Write a program to input a positive integer and find it is a square number or not.
#include<stdio.h>
#include<math.h>

int main()
{
    int n,root;
    printf("enter a positive integer :");
    scanf("%d",&n);
    root=sqrt(n);
    if(n==root*root)
    {
        printf("yes,it is a square number");
    }
    else
    {
        printf("no,it is not a square number");
    }
    return 0;
}