//  Display the following series up to Nthterms. :
//  1    8     27    64 ...... 
#include<stdio.h>

int main()
{
    int n;
    printf("***Assignment by Nirajan Malla***\n");
    printf("enter the nth term:");
    scanf("%d",&n);
    printf("required series of %d terms:\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i*i*i);
    }
    return 0;
}