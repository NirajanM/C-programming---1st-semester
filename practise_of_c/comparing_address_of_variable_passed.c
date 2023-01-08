#include<stdio.h>

int pass(int a)
{
    printf("the address of a after passing to a function is %u",&a);
}

int main(){
    int a=12;
    printf("the address of a before passing to a function is %u\n",&a);
    pass(a);

    return 0;
}