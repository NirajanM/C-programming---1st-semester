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
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i], arr[i] = arr[j], arr[j] = temp;
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