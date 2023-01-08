#include<stdio.h>

int main(){
    int a=123;
    int *ptr=&a;
    int **ptr1=&ptr;
    //**ptr->pointer to variable a(stores address of a)
    //**ptr2->pointer to pointer ptr(stores address of ptr)
    printf("the value of a is %d %d %d",a,*ptr,**ptr1);
    return 0;
}