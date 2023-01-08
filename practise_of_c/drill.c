#include<stdio.h>

int main(){
    int a=3;
    int *b=&a;
    int **c=&b;

    printf("value of a is %d",**c);
    return 0;
}