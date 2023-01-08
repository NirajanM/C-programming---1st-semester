#include<stdio.h>
#include<string.h>

int main(){
    char *val1="hella";
    char val2[]="hell";
    int a = strcmp(val1,val2);
    printf(" the value is %d",a);
    return 0;
}