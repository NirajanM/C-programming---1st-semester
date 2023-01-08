// 0, 1, 1, 2​, 3, 5, 8, 13,
#include<stdio.h>

void fibonacci(int n,int a,int b,int temp)
{
    if(n==0)
    {
        return;
    }
    else
    {
        printf("%d ",a);
        temp=a;
        a=b;
        b=a+temp;
        fibonacci(n-1,a,b,temp);
    }
}

int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);

    fibonacci(n,0,1,0);

    return 0;
}