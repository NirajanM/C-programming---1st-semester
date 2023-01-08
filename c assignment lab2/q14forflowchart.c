#include<stdio.h>

int main(){
    int a,b,c,answer;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter three different numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(b>c)
        {
            answer=b;
        }
        else if(c>a)
        {
            answer=a;
        }
        else
        {
            answer=c;
        }
    }
    else
    {
        if(a>c)
        {
            answer=a;
        }
        else if(c>b)
        {
            answer=b;
        }
        else
        {
            answer=c;
        }

    }
    printf("middle term from the given input is %d",answer);
    return 0;
}