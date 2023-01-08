// 15.Input a positive integer and find its sum of digits. For example:-7629,  sum of digits =7+6+2+9=24
#include<stdio.h>
int sumD(int n)
{
    int remainder,sum=0;
    while(n!=0)
    {
        remainder=n%10;
        sum+=remainder;
        n=n/10;
    }
    return sum;

}

int main(){
    int n,result;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the number :");
    scanf("%d",&n);
    result=sumD(n);
    printf("the sum of digits of integer %d is:%d",n,result);
    return 0;
}