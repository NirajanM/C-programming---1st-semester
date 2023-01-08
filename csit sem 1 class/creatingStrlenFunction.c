#include<stdio.h>

int STRLEN(char name[20])
{
    int i=0;
    for( i ; name[i]!='\0' ; i++ )
    {
    }
    return i;
}

int main()
{
    char name[20]={'n','i','r','a','j','a','n','\0'};
    char name1[20]="nirajan ";
    printf("length of string is %d\n",STRLEN(name));
    printf("length of string is %d",STRLEN(name1));
    return 0;
}