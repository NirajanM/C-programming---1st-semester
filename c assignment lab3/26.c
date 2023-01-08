// To calculate x raised to the power y
#include<stdio.h>
#include<math.h>

int raise(int x,int y)
{
    return pow(x,y);
}
int main(){
    int x,y;
    printf("***assignment by Nirajan Malla***\n");
    printf("enter the value of x and y:\n");
    scanf("%d%d",&x,&y);
    printf("%d raised to the power %d is %d",x,y,raise(x,y));
    return 0;
}