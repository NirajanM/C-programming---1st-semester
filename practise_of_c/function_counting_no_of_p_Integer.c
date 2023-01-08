#include<stdio.h>
int count(int *a)
{
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
    }
    return count;
}

int main(){
    int arr[10]={1,23,3,44,5,612,7,81,9,1};
    printf("number of positive integer is %d",count(arr));
    return 0;
}