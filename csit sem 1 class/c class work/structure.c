#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[50];
    int age;
};
int main()
{
    struct student s;
    s.rollno=1;
    strcpy(s.name,"nirajan malla");
    s.age=14;

    printf("%d %s %d",s.rollno,s.name,s.age);
    return 0;
}