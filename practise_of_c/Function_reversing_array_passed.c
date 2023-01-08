#include<stdio.h>

void reverse(int *ptr,int a)
{
    int i=0,temp;
    while(i<a/2)
    {
        temp=ptr[i];
        ptr[i]=ptr[a-i-1];
        ptr[a-i-1]=temp;
        i++;
    }
    printf("printing array in reverse...\n\n");
    for(int j=0;j<a;j++)
    {
        printf("%d\n",ptr[j]);
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,10);
    return 0;
}