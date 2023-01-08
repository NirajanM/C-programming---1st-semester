#include<stdio.h>

void STRCPY(char n2[20],char n1[20]){
    int i=0;
    for( i ; n1[i]!='\0' ; i++ )
    {
        n2[i]=n1[i];
    }
    n2[i]='\0';
}

int main()
{
    char name1[20]="abcdef";
    char name2[20];
    STRCPY(name2,name1);
    printf("now name2 stores %s",name2);
    return 0;
}