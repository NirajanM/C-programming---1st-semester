#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char a;
    char name[30];
    int i=0;
    printf("enter anything: ");
    while(1)
    {
        a=getch();
        if(a==13)
        {
            break;
        }
        else{
            name[i]=a;
            putch('a');
            i++;
        }
    }
    name[i]='\0';
    printf("\nyou entered \"%s\"",name);
    for(int i=0;i<30;i++)
    {
        printf("\n%c",name[i]);
    }
    return 0;
}