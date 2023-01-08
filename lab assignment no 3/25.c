// To input any two numbers and find their GCD/HCF.
#include<stdio.h>

int main()
{
    int x,y,hcf=1;
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
    printf("hcf of %d and %d is %d",x,y,hcf);
    return 0;
}