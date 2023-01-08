// To input a number and print its first 10 multiples
#include<stdio.h>
void printmultiples(int n)
{
    printf("First 10 multiples of %d are:\n",n);
    for(int i=1;i<10;i++)
    {
        printf("%d,",i*n);
    }
      printf("%d",10*n);
}

int main(){
    int number;
    printf("***Assignment by Nirajan Malla***\n");
    printf("Enter the number : ");
    scanf("%d",&number);
    printmultiples(number);
    return 0;
}