#include<stdio.h>

int main(){
    int a,b,c;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter any three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is greatest among given three numbers",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greatest among given three numbers",b);
    }
    else
    {
        printf("%d is greatest among given three numbers",c);
    }
    return 0;
}