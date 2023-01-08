//write a program to store and print name rollno and age of 5 students
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[50];
    int age;
};
int main()
{
    struct student s[5];
    printf("Taking input...\n");
    for(int i=0;i<5;i++)
    {
        char fullname[50];
        printf("enter the roll no of student%d:",i+1);
        scanf("%d",&s[i].roll);
        printf("enter the name of student%d:",i+1);
        fflush(stdin);
        gets(fullname);
        strcpy(s[i].name,fullname);
        printf("enter the age of student%d:",i+1);
        scanf("%d",&s[i].age);

    }
    printf("***printing the inputs***\n");
    for(int i=0;i<5;i++)
    {
        printf("name=%s\n",s[i].name);
        printf("roll no=%d\n",s[i].roll);
        printf("age=%d\n",s[i].age);
        printf("\n\n");
    }
    return 0;
}