#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
    int i=0;
    char a;
    char str[10];
    char str2[10];
    while(a!='\n'){
        fflush(stdin);
        printf("enter character : ");
        scanf("%c",&a);
        str[i]=a;
        i++;
    }
    str[i-1]='\0';
    printf("now enter the second string : ");
    scanf("%s",&str2);
    printf("str is %s\n",str);
    printf("str2 is %s\n",str2);
    printf("strcmp is %d\n",strcmp(str,str2));

    return 0;
}