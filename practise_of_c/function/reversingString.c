#include<stdio.h>
#include<string.h>

void reverse(char name[15],int length)
{
    for(int i=0;i<length/2;i++)
    {
        char temp=name[i];
        name[i]=name[length-i-1];
        name[length-i-1]=temp;
    }
   
}

int main()
{
    char name[15]="Nishanta";// '\0' null character at last
    char name2[15]="Nishanta";// '\0' null character at last

    reverse(name,strlen(name));
    printf("reverse of %s: %s",name2,name);
    return 0;
}