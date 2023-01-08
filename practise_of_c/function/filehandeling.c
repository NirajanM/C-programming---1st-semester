#include<stdio.h>

int main()
{
    char name[30] = "Nishanta Pandit\n";
    FILE *ptr;
    ptr= fopen("random.txt","a+");
    fprintf(ptr,"%s",name);
    fprintf(ptr,"%s","nishanta Pandit");
    fclose(ptr);
    return 0;
}