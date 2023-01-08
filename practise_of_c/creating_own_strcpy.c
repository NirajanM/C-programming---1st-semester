#include<stdio.h>
#include<string.h>

void STRCPYy(char *tar,char *src)
{
    int i=0;
    while(src[i]!='\0')
    {
        tar[i]=src[i];
        i++;
    }
    tar[i]='\0';
}

int main(){
    char tar[15];
    char src[15];
    printf("enter the string :");
    gets(src);
    STRCPYy(tar,src);
    printf("now src is %s\nAnd tar is also %s\n",src,tar);
    printf("strcmp is %d",strcmp(tar,src));
    return 0;
}