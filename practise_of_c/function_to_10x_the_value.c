#include<stdio.h>

int mult(int *x){
    int result=10*(*x);
    return result;
}

int main(){
    int a;
    printf("enter the value : ");
    scanf("%d",&a);
    printf("10x%d is %d",a,mult(&a));
    return 0;
}