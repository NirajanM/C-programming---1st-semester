#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[50][20];
    char temp[20];

    int i, j, n;
    printf("How many students are there\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of student\n");
        scanf("%s", name[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("Names in alphabetical order\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
    getch();
}
