// K
// wk
// owk
// howk
// chowk
// lchowk
// ulchowk
// pulchowk
#include <stdio.h>

int main()
{
    char name[10] = "pulchowk";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 7 - i; j < 8; j++)
            printf("%c", name[j]);
        printf("\n");
    }
    return 0;
}