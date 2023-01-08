#include<stdio.h>

int main(){
    int a=2;
    int *ptra=&a;
    printf("the adress of a is %u & %d\n",&a,ptra);
    printf("the value of a is %d & %d",a,*ptra);
    return 0;
}