#include<stdio.h>

int main(){
    int a,b,c;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter any three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    if((a>b && b>c) || (c>b && b>a))
    {
        printf("%d is the middle number",b);
    }

    else if((b>a && a>c) || (c>a && a>b))
    {
        printf("%d is the middle number",a);
    }

    else
    {
        printf("%d is the middle number",c);
    }
    return 0;
}