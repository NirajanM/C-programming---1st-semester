#include<stdio.h>

float average(int a, int b, int c)
{
    return (float)(a+b+c)/3;
}

int main(){
    int a,b,c;
    printf("input 3 numbers to find it's average: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("the average of 3 numbers is %.3f",average(a,b,c));

    return 0;
}