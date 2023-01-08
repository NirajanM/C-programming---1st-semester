#include<stdio.h>

int isPrime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 1;
        }
    }
    return 0;

}
int main(){
    int n;
    int result;
    printf("enter the value of n to do prime test:");
    scanf("%d",&n);
    result=isPrime(n);
    if(result==0){
        printf("it is a prime number");
    }
    else{
        printf("it is not a prime number");
    }
    return 0;
}