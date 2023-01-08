// To input a positive integer and find it is a prime number or not
#include<stdio.h>
#include<math.h>
int Pcheck(int n)
{
   for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    int n,result;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the number to perform a prime check:");
    scanf("%d",&n);
    result=Pcheck(n);
    if(result==0)
    {
        printf("yes it is a prime number");
    }
    else
    {
        printf("No it is not a prime number");
    }
    return 0;
}