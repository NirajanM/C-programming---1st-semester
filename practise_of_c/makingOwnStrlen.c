#include<stdio.h>
#include<conio.h>

void strleng(char *str)
{
    int i=0;
    int count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("string is of length %d",count);
}


int main(){
    char str[12];
    printf("enter the string : ");
    gets(str);
    strleng(str);
     return 0;
}