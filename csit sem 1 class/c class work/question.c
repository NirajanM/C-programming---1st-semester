// Q] Write a menu driven program which performs the following jobs:
// i.Create  a  structure  named  student  with  member  variables:  roll,  name, grade, gender, age.
// ii.Define  ten  structure  variables  of  type  student  and using  loop  take  input for all ten structure      variables.
// iii.Display names of all male students.
// iv.Exit. 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 10
struct student{
    int roll;
    char name[40];
    int grade;
    char gender;
    int age;
};

int main()
{
    struct student s[N];
    int option;
    char choice='y';
    int i;
    printf("Menu Driven Program");
    printf("\n Enter 1 for inputting student information");
    printf("\n Enter 2 to display all male students");
    printf("\n Enter 3 for exit");
    while(choice!='n')
    {
        printf("\n Enter your option:\t");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("\n Enter info about %d students", N);
                for(i=0;i<3;i++)
                {
                    printf("\n Info. about student%d",i+1);
                    printf("\n Roll:\t");
                    scanf("%d", &s[i].roll);
                    printf("\n Name:\t");
                    gets(s[i].name);
                    printf("\n Grade:\t");
                    scanf("%d", &s[i].grade);
                    printf("\n Gender(M/F):\t");
                    scanf(" %c", &s[i].gender);
                    printf("\n Age:\t");
                    scanf("%d", &s[i].age);
                }
                break;

            case 2:
                printf("\nList of Male Students");
                for(i=0;i<N;i++)
                {
                    if(s[i].gender=='M'||s[i].gender=='m')
                    printf("\n%s\n",s[i].name);
                }
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid Option!!!");
        }
        printf("Do you want to continue?(y/n)");
        scanf(" %c", &choice);
    }
    getch();
    return 0;
}