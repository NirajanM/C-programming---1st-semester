#include<stdio.h>

int main(){
    //a number that is divisible only by itself and 1 (e.g. 2, 3, 5, 7, 11)
    int num,count=0;
    printf("enter the number to perform prime number test: ");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("it is not a prime number");
            count++;
            break;
        }
        else{}
    }
    if(num==1 || num==2 || count==0){
            printf("it is a prime number");
    }
    else{}
    return 0;
}