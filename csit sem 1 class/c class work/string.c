#include<stdio.h>
#include<string.h>
int main()
{
    char name1[40];
    char name2[40];
    printf("enter full name1:");
    gets(name1);
    printf("enter full name2:");
    gets(name2);
    
    // strcpy(name1,name2);
    printf("strcpy gives %d",strcmp(name1,name2));
    // strcmp(name1,name2);
    return 0;
    // airajan
    // nirajan
}