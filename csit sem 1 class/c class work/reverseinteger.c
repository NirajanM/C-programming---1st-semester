#include<stdio.h>

int ReverseInteger(int a)
{
    int temp;
    int reverse=0;
    while(a>0)
    {
        temp=a%10;
        reverse=reverse*10+temp;
        a=a/10;
    }
    return reverse;
}
int main()
{
    int a;
    printf("enter any integer:");
    scanf("%d",&a);
    printf("reverse of given integer is %d",ReverseInteger(a));
    return 0;
}