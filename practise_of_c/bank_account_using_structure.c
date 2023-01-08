#include<stdio.h>
#include<string.h>


typedef struct Bankaccount{
    int anum;
    int cash;
    char name[10];
}ba;

void display(ba *a)
{
    for(int i=0;i<3;i++)
    {
        printf("name stored in a%d is %s\n",i+1,a[i].name);
        printf("account number stored in a%d is %d\n",i+1,a[i].anum);
        printf("total cash stored in a%d is %d\n\n",i+1,a[i].cash);
    }
}

int main(){
    ba a[3];

    a[0].anum=0541123;
    a[0].cash=700000;
    strcpy(a[0].name,"hari");

    a[1].anum=0533212;
    a[1].cash=500000;
    strcpy(a[1].name,"ram");

    a[2].anum=0523563;
    a[2].cash=678665;
    strcpy(a[2].name,"shital");

    display(a);

    return 0;
}