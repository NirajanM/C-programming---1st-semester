#include<stdio.h>

int reverse(int n);

int main()
{
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    printf("reverse of number is %d",reverse(n));
    return 0;
}
int reverse(int n){
    int reverse=0;
    int lastdigit;
    //1
    while(n>0)
    {
        lastdigit=n%10;
        //1234%10=4
        //123%10=3
        //12%10=2
        //1
        reverse=reverse*10+lastdigit;//43*10+2=432*10+1=4321
        n=n/10;
        //1234/10=123/10=12/10=1/10=0
    }
    return reverse;
}