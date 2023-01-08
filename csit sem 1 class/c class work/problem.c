#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct book
{
    char name[30];
    int pages;
    float price;
}book;
 

int main()
{
    book b[5];
    for (int i = 0; i <2; i++)
    {
        printf("\n name of the book : ");
        fflush(stdin);
        gets(b[i].name);
        printf("\n pages: ");
        scanf("%d",&b[i].pages);
        printf("\n price: ");
        scanf("%f",&b[i].price);
        printf("\n");
    }
    printf("\n Record of the books are \n");
    for (int i = 0; i < 2; i++)
    {
        printf("name: %s \npages:%d \nprice: %f\n \n",b[i].name,b[i].pages,b[i].price);
 
    }

    return 0;
}