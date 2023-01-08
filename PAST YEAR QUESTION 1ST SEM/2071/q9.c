// WAP to read the data file which has following details.
// a.Name b.Age c.Test player d.Total run.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    int age;
    float testPlayer;
    int totalRun;
    FILE *ptr;
    if ((ptr = fopen("file.txt", "r")) == NULL)
    {
        printf("!error");
        exit(1);
    }
    while (fscanf(ptr, "%s %d %f %d", &name, &age, &testPlayer, &totalRun) != EOF)
    {
        printf("\n\nname:%s\nage:%d\ntest rank:%.2f\ntotal run:%d", name, age, testPlayer, totalRun);
    }
    fclose(ptr);
    getch();
    return 0;
}