// To input anytwonumbers and print their LCM. Hint:LCM(a,b)=a×b/HCF(a,b)
#include<stdio.h>

int main()
{
    int x,y,hcf=1,lcm;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter two numbers:\n");
    scanf("%d%d",&x,&y);
    for(int i=1;i<=x;i++)
    {
        if(x%i==0 && y%i==0)
        {
            hcf=i;
        }
    }
    lcm=x*y/hcf;
    printf("lcm of %d and %d is %d",x,y,lcm);
    return 0;
}