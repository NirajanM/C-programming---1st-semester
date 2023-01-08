// To input any three numbers and print their LCM.
#include<stdio.h>
int givelcm(int a,int b,int c)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0 || b%i==0 || c%i==0)
        {
            
        }
    }
}

int main(){
    int a,b,c,lcm;
    printf("***Assignment of Nirajan Malla***\n");
    printf("enter three numbers in ascending order:\n");
    scanf("%d%d%d",&a,&b,&c);
    lcm=givelcm(a,b,c);
    return 0;
}