#include<stdio.h>

int main(){
    int a,b,c,answer;
    printf("***asssignment by Nirajan Malla***\n");
    printf("enter any three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b)
    {
        if(a>c)
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
        if(b>c)
        {
            answer=b;
        }
        else
        {
            answer=c;
        }
    }
    printf("greatest of three numbers is %d",answer);
    return 0;
}