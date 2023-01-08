// WAP to create a structure student having data members name, roll-number and percentage.Complete the program to display the name of student having percentage greater than or equal to 60.
#include <stdio.h>

struct student
{
    char name[20];
    int rollNo;
    float percentage;
};
int main()
{
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("data%d:\n", i + 1);
        printf("enter the name of student:");
        scanf("%s", &s[i].name);
        printf("enter the roll-number of student:");
        scanf("%d", &s[i].rollNo);
        printf("enter the percentage of student:");
        scanf("%f", &s[i].percentage);
    }
    for (int i = 0; i < 3; i++)
    {
        if (s[i].percentage >= 60)
        {
            printf("\n\nName of student:%s\nRoll number:%d\nPercentage:%.2f", s[i].name, s[i].rollNo, s[i].percentage);
        }
    }
    return 0;
}