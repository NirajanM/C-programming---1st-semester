//3. What is structure? How is it different from union? Create a structure named course with name,code and credit_hour as its member. Write a program using this structure using this structure to read data of 5courses and display data of those courses with credit_hour grater than 3.[1+2+7]

#include <stdio.h>

struct course
{
    char name[15];
    int code;
    float credit_hour;
};

int main()
{
    struct course c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("for course %d:\n", i + 1);
        printf("enter the name of course:");
        scanf("%s", c[i].name);

        printf("enter the code of this course:");
        scanf("%d", &c[i].code);

        printf("enter the credit_hour of this course:");
        scanf("%f", &c[i].credit_hour);
    }

    printf("data of course with credit hour greater than 3-\n");
    for (int i = 0; i < 5; i++)
    {
        if (c[i].credit_hour > 3)
        {
            printf("\ncourse name:%s\ncode:%d\ncredit_hour:%.2f\n\n", c[i].name, c[i].code, c[i].credit_hour);
        }
    }
    return 0;
}