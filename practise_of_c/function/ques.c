#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
    char name[30];
    int RollNo;
    char address[15];
    int marks;
}s;

int main()
{
    s data[4];
    int highestValue = 0;
    for(int i=0;i<48 ;i++)
    {
        printf("enter name of student%d:",i+1);
        scanf("%s",&data[i].name);
        // fflush(stdin);
        // gets(data[i].name);
        printf("enter roll no of student%d:",i+1);
        scanf("%d",&data[i].RollNo);
        printf("enter address of student%d:",i+1);
        scanf("%s",&data[i].address);
        printf("enter marks of student%d:",i+1);
        scanf("%d",&data[i].marks);
    }
    for(int i=0;i<48 ;i++)
    {
       if(data[i+1].marks>data[i].marks)
       {
           highestValue = i;
       }
    }

    printf("detail of student with highest marks:\n");
    printf("name:%s\n",data[highestValue].name);
    printf("address:%s\n",data[highestValue].address);
    printf("roll no:%d\n",data[highestValue].RollNo);
    printf("marks:%d\n",data[highestValue].marks);
    return 0;
}