#include<stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=&arr[0];
    printf("ptr stores the value %d \n",*ptr);
    ptr=ptr+2;
    printf("ptr + 2 stores the value %d",*ptr);
    return 0;
}