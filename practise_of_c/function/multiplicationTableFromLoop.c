//WAP to print multiplication table of user input number using loop
#include<stdio.h>

int main()
{
    int number;
    printf("enter the number you want multiplication table of :");
    scanf("%d",&number);

    printf("\n\n***multiplication table of %d***\n",number);
    for(int i=1; i<=10 ; i++)
    {
        printf("%dx%d=%d\n",number,i,number*i);
    }
    return 0;
}