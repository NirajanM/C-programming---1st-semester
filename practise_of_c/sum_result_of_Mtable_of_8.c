#include<stdio.h>

int main(){
    int i=0,result=0;
    printf("***Multiplication table of 8***\n");
    for(i;i<10;i++)
    {
        printf("8x%d=%d\n",i+1,8*(i+1));
        result+=8*(i+1);
    }
    printf("the sum of result is %d",result);

    // or use this-
    // printf("the sum of result is %d",(8*55));

    return 0;
}