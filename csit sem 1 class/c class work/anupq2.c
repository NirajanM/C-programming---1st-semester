// WAP to input name of  5 person and display it in alphabetic order .
#include<stdio.h>
#include<string.h>
struct person{
    char name[30];
};
int main()
{
    struct person p[5];
    char fullname[30];
    for(int i=0;i<5;i++)
    {
        printf("enter the name of person%d:",i+1);
        gets(fullname);
        strcpy(p[i].name,fullname);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(strcmp(p[i].name,p[j].name)>0)
            {
                char temp[30];
                strcpy(temp,p[i].name);
                strcpy(p[i].name,p[j].name);
                strcpy(p[j].name,temp);
            }    
        }
    }
    printf("name of person entered in alphabetical order:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d.%s\n",i+1,p[i].name);
    }
    return 0;
}