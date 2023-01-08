/*WAP to print the following output.
1
01
101
0101
10101
*/

#include <stdio.h>

int main()
{
    int arr[5] = {1, 0, 1, 0, 1};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4 - i; j < 5; j++)
        {
            printf("%d", arr[j]);
        }
        printf("\n");
    }
    return 0;
}
