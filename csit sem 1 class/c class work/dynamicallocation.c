#include<stdio.h>

int main()
{
    int n;
    printf("enter number of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
    }
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i+1,arr[i]);
    }
    return 0;
}