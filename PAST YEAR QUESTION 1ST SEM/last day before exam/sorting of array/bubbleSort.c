#include <stdio.h>

int main()
{
    int arr[20], i, j, n, temp;
    printf("enter the total number of element in array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter element%d:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("sorted array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}