#include<stdio.h>
void printMyName();
void printAnotherName();
int main()
{
    int a=12,b=13,c=14;
    printf("%d%d%d",a,b,c);
    printMyName();//function call
    printAnotherName();
    printMyName();
    printMyName();
    printAnotherName();
    printMyName();
    printMyName();
    printAnotherName();
    printMyName();
    return 0;
}

void printMyName(){
    printf("prateek acharya\n");
    printf("prateek acharya\n");
    printf("prateek acharya\n");
    printf("prateek acharya\n");
    printf("prateek acharya\n");
    printf("prateek acharya\n");
    printf("prateek acharya\n");
    printf("prateek acharya\n");
}

void printAnotherName(){
    printf("nirajan malla\n");
    printf("nirajan malla\n");
    printf("nirajan malla\n");
    printf("nirajan malla\n");
    printf("nirajan malla\n");
    printf("nirajan malla\n");
    printf("nirajan malla\n");
}
