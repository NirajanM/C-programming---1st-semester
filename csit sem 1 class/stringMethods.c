#include<stdio.h>
#include<string.h>//header or library that contains string related functions

//strlen(string); return integer -->counts length of string
//strcpy(target,source); --> copies string from source to target
//strcat(str1,str2); --> adds str2 to str1
//strcmp(str1,str2); --> str1-str2 and returns 1 if str1 has larger ascii value , 0 if both are equal and -1 if str1 has smaller acsii value than str2

int main()
{
    char name1[20]="rewas";
    char name2[20]="puri";
    char name3[20];
    char name4[20];
    char name5[20]="abcde";
    char name6[20]="abcde";
    int length;

    length=strlen(name2);//counts the length of string
    printf("the length of string is %d\n",length);

    strcpy(name3,name1);//copies the string to target from source
    strcpy(name4,"different type");//yesari pathauna ni milxa
    printf("\nname3 changes to %s\n",name3);

    strcat(name1,name2);//concatenate 2 strings and save it in first
    printf("%s\n",name1);

    printf("strcmp returns %d",strcmp(name5,name6));
    
    return 0;
}