#include<stdio.h>

int Strlen(char name[50])
{
    int i=0;
    while (name[i]!='\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char name[50]="Nirajan";
    printf("the length of string is %d",Strlen(name));
    return 0;
}