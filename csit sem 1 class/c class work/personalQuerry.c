#include<stdio.h>
void print(int b[5])
{
    printf("%d\n",b);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    printf("%d\n",a);
    print(a);
    return 0;
}