#include<stdio.h>

int tenX(int *a)
{
    return 10*(*a);
}

int main(){
    int a;
    printf("enter the value : ");
    scanf("%d",&a);
    printf("\npassing to function....\n\n");
    printf("10x of %d is %d",a,tenX(&a));
    return 0;
}