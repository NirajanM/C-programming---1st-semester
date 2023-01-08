#include<stdio.h>
#include<string.h>

int main(){
    char str1[15];
    char str2[15];
    int i=0;
    char c;
    
    printf("enter the first string : ");
    gets(str1);
    printf("***now second string by charater input***\n");

    while(c!='\n')
    {
        printf("enter character %d and press enter (press enter twice to exit loop): ",i+1);
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0';

   
    printf("str1 is %s\n",str1);
    printf("str2 is %s\n",str2); 
    printf("str1 and str2 returns %d",strcmp(str1,str2));
    return 0;
}