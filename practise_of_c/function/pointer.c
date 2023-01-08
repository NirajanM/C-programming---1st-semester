#include<stdio.h>

void swap(int *number1,int *number2){
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
    // printf("%d %d",number1,number2);
}

int main()
{
    // int a=6;
    // int ab[4]={1,2,3,4};
    // int *ptr;
    // ptr = &a;
    // printf("address of a is %u\n",&a);
    // printf("address of a is %d\n",ptr);

    int number1=12,number2=24;
    swap(&number1,&number2);
    printf("%d %d",number1,number2);
    return 0;
}