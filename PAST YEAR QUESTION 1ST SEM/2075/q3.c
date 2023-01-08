// WAP that reads data from a file "input.txt" and writes to "output.txt"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // creating file pointer to point input.txt and opening it in reading mode
    FILE *fptr;
    int c;
    int i = 0;
    char filedata[999];
    fptr = fopen("input.txt", "r");
    if (fptr == NULL)
    {
        printf("error!");
        exit(1);
    }

    // this loop runs until the end of file
    while ((c = getc(fptr)) != EOF)
    {
        filedata[i] = c;
        i++;
    }
    filedata[i] = '\0'; // all data in string form is now stored in character array (string)-filedata.
    fclose(fptr);

    // opening file output.txt in write mode
    if ((fptr = fopen("output.txt", "w")) == NULL)
    {
        printf("error!");
        exit(1);
    }
    // writing stored string in output.txt file
    fprintf(fptr, "%s", filedata);
    fclose(fptr);

    return 0;
}