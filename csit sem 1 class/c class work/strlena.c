#include<stdio.h>
int STRLEN(char name[50])
{
    int i=0;
    while(name[i]!='\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char name[50];
    printf("enter full name:");
    gets(name);
    printf("the length of entered string is %d",STRLEN(name));
    return 0;
}