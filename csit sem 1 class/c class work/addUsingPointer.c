#include<stdio.h>
void add(int*a,int*b)
{
    (*a)=(*a)+(*b);
}
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    add(&a,&b);
    printf("%d",a);
    return 0;
}