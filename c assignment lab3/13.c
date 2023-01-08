// 13.Display all prime numbers upto 1000.
#include<stdio.h>

int isPrime(int a)
{
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;

}
int main(){
    int n=1000;
    int result;
    printf("prime number from 1-1000 :\n2 ");
    for(int i=3;i<=n;i++)
    {
        result=isPrime(i);
        if(result==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}