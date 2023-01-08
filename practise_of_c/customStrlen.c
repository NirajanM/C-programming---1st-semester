#include<stdio.h>
#include<string.h>

int main(){
    char *name;
   printf("enter your name : ");
    gets(name);
    puts(name);
    int a=strlen(name);

    printf("your name has %d letter",a);
    return 0;
}