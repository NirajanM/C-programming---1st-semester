#include<stdio.h>

int printMultiplicationTable(int );
int sum(int ,int );

int main(void)
{
    int number1,number2,number3;
    int result;
    int Msum1,Msum2,Msum3;

    printf("enter the 1st number you want mul.table of :");
    scanf("%d",&number1);
    printf("enter the 2nd number you want mul.table of :");
    scanf("%d",&number2);
    printf("enter the 3rd number you want mul.table of :");
    scanf("%d",&number3);
    Msum1=printMultiplicationTable(number1);
    Msum2=printMultiplicationTable(number2);
    Msum3=printMultiplicationTable(number3);
    result=sum(number1,number2);
    printf("sum of first mul.table is %d\n",Msum1);
    printf("sum of second mul.table is %d\n",Msum2);
    printf("sum of third mul.table is %d\n",Msum3);
    printf("\n%d",result);
    return 0;
}

int printMultiplicationTable(int a){
    int count=0;
    printf("\n\n***multiplication table of %d***\n",a);
    for(int i=1;i<11;i++){
        printf("%dx%d=%d\n",a,i,a*i);
        count=count+a*i;
    }
    return count;
}

int sum(int a,int b){
    return a+b;
}