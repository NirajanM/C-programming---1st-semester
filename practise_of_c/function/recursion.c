#include<stdio.h>

void print(int arr[10],int i){
    if(i==9)
    {
        return;
    }
    else{
        printf("%d",arr[i]);
        print(arr,++i);
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    print(arr,0);
    return 0;
}