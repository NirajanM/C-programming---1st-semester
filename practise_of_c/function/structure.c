#include<stdio.h>

typedef struct student{
    int idno;
    char address[15];
    char gender;
}s;

int main()
{
    s data[5];
    for(int i=0;i<5 ;i++)
    {
        printf("enter idno of student%d:",i+1);
        scanf("%d",&data[i].idno);
        printf("enter adress of student%d:",i+1);
        scanf("%s",&data[i].address);
        printf("enter gender of student%d:",i+1);
        scanf(" %c",&data[i].gender);
    }
    for(int i=0;i<5 ;i++)
    {
        printf("idno of student%d: %d\n",i+1,data[i].idno);
       
        printf("adress of student%d: %s\n",i+1,data[i].address);
       
        printf("gender of student%d: %c\n",i+1,data[i].gender);
    }
    return 0;
}