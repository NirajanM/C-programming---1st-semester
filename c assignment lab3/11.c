#include<stdio.h>
#include<math.h>
int Ccheck(int n)
{
    int b=pow(n,1/3.0);
    if(b*b*b==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    int n,result;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the number to perform a cube check:");
    scanf("%d",&n);
    result=Ccheck(n);
    if(result==1)
    {
        printf("yes it is a cube number");
    }
    else
    {
        printf("No it is not a cube number");
    }
    return 0;
}