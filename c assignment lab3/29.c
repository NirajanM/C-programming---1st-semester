// To input any two numbers and find their GCD/HCF.opengl
#include<stdio.h>

int GiveHCF(int n1,int n2)
{
    int c=1;
    for(int i=1;i<=n1;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            c*=i;
        }
    }
    return c;  
}

int main(){
    int n1,n2,hcf;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter two numbers :\n");
    scanf("%d%d",&n1,&n2);

    hcf=GiveHCF(n1,n2);
    printf("hcf of %d and %d is %d",n1,n2,hcf);
    return 0;
}