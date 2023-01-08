#include<stdio.h>

void findLandS(int arr[7]);

int main()
{
    int arr[7]={122,12,45,1777,333,2345,34};
    findLandS(arr);
    return 0;
}

void findLandS(int arr[7]){
    int L=arr[0],S=arr[0];
    for(int i=0;i<7;i++)
    {
        if(S>arr[i])
        {
            S=arr[i];
        }
        
        if(L<arr[i])
        {
            L=arr[i];
        }
    }
    printf("largest element of array is %d \n and the smallest element is %d",L,S);
}