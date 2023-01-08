#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("enter four number :");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
    {
        printf("%d is the greatest number",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d is the greatest number",b);
    }
    else if(c>b && c>a && c>d)
    {
        printf("%d is the greatest number",c);
    }
    else
    {
        printf("%d is the greatest number",d);
    }
    return 0;
}