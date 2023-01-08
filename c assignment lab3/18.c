// To input a number and check it is Armstrongnumber or not. [Note: Armstrong number means 371=3^3+7^3+1^3, cube of each digit and finding their sum.]
#include<stdio.h>
#include<math.h>

int checkA(int n)
{
    int N=n,rem,arm=0;
    do
    {
        rem=n%10;
        arm+=pow(rem,3);
        n=n/10;
    }while(rem!=0);
    if(N==arm)
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
    printf("Enter a number to check whether it's armstrongnumber or not : ");
    scanf("%d",&n);
    result=checkA(n);
    if(result==1)
    {
        printf("Yes ,it is armstrongnumber");
    }
    else
    {
        printf("No ,it isn't armstrongnumber");
    }
    return 0;
}