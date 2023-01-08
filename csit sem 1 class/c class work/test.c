#include<stdio.h>

int main()
{
    int a[2][2];
    printf("%u\n",&a[2][1]);
    printf("%u\n",&a[2][2]);
    printf("%d\n",*(a+2)+1);
    printf("%d\n",*(a+2)+2);
    return 0;
}