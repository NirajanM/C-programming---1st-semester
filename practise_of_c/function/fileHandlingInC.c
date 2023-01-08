#include <stdio.h>
#include <string.h>
char essay[100];

int main()
{
    //file handling = creating , writing , reading files using c (a powerful tool)
    //modes in file handling
    // r ,w ,a, r+,w+,a+
    int i=0;
    FILE *fptr;
    fptr = fopen("Firstfile.txt", "r");
    char ch;
    //EOF=End Of File
    //fgetc()=characterwise input ,return same character
    while ((ch = fgetc(fptr)) != EOF)
        {
           essay[i]=ch;
           i++;
        }

    fclose(fptr);
    strcat(essay,"\n here my short message ends");
    printf("%s",essay);

    return 0;
}