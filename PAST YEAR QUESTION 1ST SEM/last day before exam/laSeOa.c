#include <stdio.h>

int main()
{
    int arr[20], i, n, large, small;
    printf("enter the number of elements of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter elements of array\n");
        scanf("%d", &arr[i]);
    }
    small = large = arr[0];
    for (i = 1; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
        if (large < arr[i])
        {
            large = arr[i];
        }
    }

    printf("largest element = %d\nsmallest element = %d", large, small);
    return 0;
}