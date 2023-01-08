/*create a structure student having data members name,roll number, and percentage.Complete the program to display the name of student having percentage greater than or equal to 60.*/

#include<stdio.h>
#include<conio.h>

struct student {
    char name[15];
    int RollNumber;
    float percentage;
};

int main()
{
    int n;
    printf("enter the total number of data you want to enter:");
    scanf("%d",&n);
    struct student stu[n];

    //storing the data
    for(int i=0 ; i<n ; i++)
    {
        printf("\ndata of student%d:\n",i+1);
        printf("enter name:");
        scanf("%s",&stu[i].name);
        //gets(stu[i].name); for storing full name
        printf("enter roll number:");
        scanf("%d",&stu[i].RollNumber);
        printf("enter percentage:");
        scanf("%f",&stu[i].percentage);
    }

    //printing data with given condition
    printf("\nData of student with percentage greater than or equal to 60\n");
    for(int i=0 ; i<n ; i++)
    {
        if(stu[i].percentage>=60)
        {
            printf("\nName:%s\nRoll Number:%d\nPercentage:%.2f\n",stu[i].name,stu[i].RollNumber,stu[i].percentage);
        }
    }
    getch();
    return 0;
}