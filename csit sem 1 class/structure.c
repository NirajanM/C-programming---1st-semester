//structure in c
//int,float,char....
// custom data type that can hold our needs in approach of solving modern problems
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct employee{
    char firstname[30];
    char lastname[15];
    int age;
    char gender;
    char address[20];
    int salary;
}ent;

int main()
{
    ent E[5];

    for( int i=0; i<2 ; i++ )
    {
        printf("\nfor employee %d\n",i+1);
        printf("enter employee first name:");
        scanf("%s",E[i].firstname);
        printf("enter employee last name:");
        scanf("%s",E[i].lastname);
        strcat(E[i].firstname," ");
        strcat(E[i].firstname,E[i].lastname);

        printf("enter the age of employee:");
        scanf("%d",&E[i].age);

        printf("enter gender(m/f/o):");
        scanf(" %c",&E[i].gender);

        printf("enter the address of employee(...,..):");
        scanf("%s",&E[i].address);

        printf("enter the salary of employee:");
        scanf("%d",&E[i].salary);

    }
    for( int i=0; i<5 ; i++ )
    {
        printf("\ndata of employee%d\n\n",i+1);
        printf("name:%s\n",E[i].firstname);
        printf("age:%d\n",E[i].age);
        printf("gender:%c\n",E[i].gender);
        printf("address:%s\n",E[i].address);
        printf("salary:%d\n\n\n",E[i].salary);
    }
    return 0;
}