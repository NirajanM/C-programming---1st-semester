#include<stdio.h>

int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }

    else{
        return x*factorial(x-1);
    }
}
int main(){

    int number;

    printf("enter the number ,you want factorial of : ");
    scanf("%d",&number);

    int a=factorial(number);

    printf("the factorial of %d is %d",number ,a);

    return 0;
}