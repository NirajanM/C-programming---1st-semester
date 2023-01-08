// x+x2/2!+x3/3!+.....+xn/n!
#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int x,n;
    float result=0;
    printf("enter the value of x and n :\n");
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        result+=(float)pow(x,i)/factorial(i);
    }
    printf("putting x and n in the equation ,result obtained is %.3f",result);
    return 0;
}