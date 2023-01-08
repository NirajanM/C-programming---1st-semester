// Write a program to input a positive integer and find it is a cube number or not.
// without using loop method
#include<stdio.h>
#include<math.h>

int main()
{
    int n,cuberoot;
    printf("enter a positive integer :");
    scanf("%d",&n);
    cuberoot=pow(n,1/3.0);
    if(n==cuberoot*cuberoot*cuberoot)
    {
        printf("yes,it is a cube number");
    }
    else
    {
        printf("no,it is not a cube number");
    }
    return 0;
}