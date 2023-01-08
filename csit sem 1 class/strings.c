#include<stdio.h>

int main()
{
    char arr[10];//string = array of character with null character at last
    char name1[20]="Binayak";
    int number[10]={1,2,3,4,5,6,7,8,9,10};
    char name2[8]={'B','i','n','a','y','a','k','\0'};
    char name3[30];

    printf("enter your name:");
    // scanf("%s",name3);
    printf("you entered :%s",name3);
    // puts(name3);

    return 0;
}