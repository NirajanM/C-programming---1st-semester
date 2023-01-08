#include<stdio.h>
#include<string.h>

int main(){
    char str[10];
    char str1[10];
    char c;
    int i=0;

    //using %s-whole string at once(of you want to include space use gets())
    printf("enter the first string :");
    scanf("%s",str);

    //using %c-one character at a time(character by character)
    printf("now using %%c\n");
    while(c!='\n')
    {        
    fflush(stdin);//this command clears previous pressed enter key(necessary to run program)
    printf("enter character %d:",i+1);
    scanf("%c",&c);
    str1[i]=c;
    i++;
    }

    //resetting last element to \0 form \n(space)
    str1[i-1]='\0';

    // printing the strings and checking if they are same or not
    printf("str stores %s\n",str);
    printf("str1 stores %s\n",str1);
    printf("strcmp is %d",strcmp(str,str1));

    return 0;
}