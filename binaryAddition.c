#include <stdio.h>
#include <string.h>
// 48=0 49=1
int main()
{
    char binary1[] = "111", binary2[] = "10011";
    int binary3[25];
    int bl1 = strlen(binary1);
    int bl2 = strlen(binary2);
    int i = bl1;
    int j = bl2;
    int k = 0;
    if (bl2 > bl1)
    {
        for (j; j >= 0; j--)
        {

            if ((binary1[j] == 48) && (binary2[i] == 48))
            {
                binary3[k] = 0;
            }
            else
            {
                binary3[k] = 1;
            }
            k++;
            i--;
        }
    }
    else
    {
        for (i; i >= 0; i--)
        {

            if ((binary1[i] == 48) && (binary2[j] == 48))
            {
                binary3[k] = 0;
            }
            else
            {
                binary3[k] = 1;
            }
            k++;
            j--;
        }
    }
    k--;
    for (int i = 0; i < k; i++)
    {
        printf("%d", binary3[i]);
    }
    return 0;
}