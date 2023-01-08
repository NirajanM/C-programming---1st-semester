//with recursion method

#include<stdio.h>

int fibonacci(int a)
{
    if(a==0 || a==1)
    {
        return a;
    }
    else
    {
   return  fibonacci(a-1)+fibonacci(a-2);
    }
}

int main(){
    int num,i=0,j=0;
    printf("enter the number :");
    scanf("%d",&num);
    printf("fibonacci series:\n");
    while(i<num){
    printf("%d\n",fibonacci(j));
    i++;
    j++;
    }
    return 0;
}