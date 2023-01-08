#include<stdio.h>

int sumOD(int n);

int main()
{
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    printf("sum of digits of number is %d",sumOD(n));
    return 0;
}
int sumOD(int n){
    int sum=0;
    int lastdigit;
    while(n>0)
    {
        lastdigit=n%10;
        sum+=lastdigit;
        n=n/10;
    }
    return sum;
}