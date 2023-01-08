#include<stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr=fopen("random.txt","r");
    ptr1=fopen("generated.txt","w");
    char c;
    c=fgetc(ptr);
    while(c!=EOF)
    {
        fputc(c,ptr1);
        c=fgetc(ptr);
    }

    fclose(ptr);
    fclose(ptr1);
    return 0;
}