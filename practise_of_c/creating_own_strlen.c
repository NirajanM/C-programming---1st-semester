#include<stdio.h>

void strleng(char *str)
{
    int count=0,i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("the length of the string(includes spaces) is %d",count);
}
int main(){
    char str[30];
    printf("input your name:");
    gets(str);
    strleng(str);
    return 0;
}