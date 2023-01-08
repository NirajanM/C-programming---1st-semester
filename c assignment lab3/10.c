#include<stdio.h>
#include<math.h>
int Scheck(int n)
{
    int b=sqrt(n);
    if(b*b==n)//int ra float ko khel(b point ma naaauda b*b==n hunxa)natra int le . paxadi ko hataidinxa
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
    printf("enter the number to perform a square check:");
    scanf("%d",&n);
    result=Scheck(n);
    if(result==1)
    {
        printf("yes it is a square number");
    }
    else
    {
        printf("No it is not a square number");
    }
    return 0;
}