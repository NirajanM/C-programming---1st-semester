#include<stdio.h>
#include<conio.h>

int main()
{
    int n,sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    sum = n*(n+1)/2;

    printf("sum of first %d natural number is %d\n",n,sum);
    printf("And its average is %d\n",sum/n);
    getch();
    return 0;
}