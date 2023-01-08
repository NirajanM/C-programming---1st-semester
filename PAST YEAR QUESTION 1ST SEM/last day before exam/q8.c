#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("abc.txt", "w");
    printf("Enter text (Press ctrl+z to stop reading character)\n");
    while ((ch = getchar()) != 13)
    {
        fputc(ch, fp);
    }
    fclose(fp);
    fp = fopen("abc.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    getch();
}
