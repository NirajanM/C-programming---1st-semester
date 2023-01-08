#include<stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=arr;
    printf("value at pointer ptr+6 is %d",*(ptr+6));

    return 0;
}