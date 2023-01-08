#include<stdio.h>
#include<string.h>

int STRLEN(char arr2[15]);
int main()
{
    char arr[15]={'N','i','s','h','a','n','t','a','\0'};// '\0'-->null character
    char arr2[15]="Nishanta";
    char name[15]="abc";
    printf("the length of string is %d\n",STRLEN(arr2));
    printf("the length of string is %d\n",strlen(arr2));
    printf("the length of string is %d\n",STRLEN(name));
    printf("the length of string is %d\n",strlen(name));
    return 0;
}

int STRLEN(char arr2[15])
{
    int i=0;
    while(arr2[i]!='\0')
    {
        i++;
    }
    return i;
}