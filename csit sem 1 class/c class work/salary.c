// WAP  to find the number of employee getting salary from 30000 to 50000 among 50 employees
#include<stdio.h>
#include<string.h>

struct employee{
    char name[50];
    int salary;
};
int main()
{
    char fullname[50];
    int count=0;
    struct employee e[50];
    printf("Taking input...\n");
    for(int i=0;i<5;i++)
    {
        printf("enter the name of employee%d:",i+1);
        fflush(stdin);
        gets(fullname);
        strcpy(e[i].name,fullname);
        printf("enter the salary of employee%d:",i+1);
        scanf("%d",&e[i].salary);
        if (e[i].salary>=30000&&e[i].salary<=50000)
        {
            count++;
        }
        

    }
    printf("***printing the inputs***\n");
    for(int i=0;i<5;i++)
    {
        printf("name=%s\n",e[i].name);
        printf("salary=%d\n",e[i].salary);
        printf("\n\n");
    }
    printf("there are %d employee with salary between 30000 to 50000",count);
    return 0;
}