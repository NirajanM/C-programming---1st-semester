#include<stdio.h>

int main()
{
    char name[40];
    int i=0;
    char test='a';
    printf("enter your name :");
    printf("enter name character by character\n");
    while(test!='1')
    {
        printf("enter character %d:",i+1);
        scanf(" %c",&test);
        name[i]=test;
        i++;
    }
    name[i-1]='\0';
    printf("name is %s",name);
    return 0;
}