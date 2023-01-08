#include<stdio.h>

int main()
{
    int number1,number2,number3;
    float n1,n2,n3;
    char name1,name2,name3;

    int number[10];
    char name[10];
    float n[10];

    //loop for storing the value in array 
    for(int i=0 ; i<10 ; i++ )
    {
        printf("enter number%d :",i+1);
        scanf("%d",&number[i]);
        //number[0]
        //number[1]
        //number[3]
        //.....
        //number[9]
    }
    //
    for(int i=0 ; i<10 ; i++ )
    {
        printf("number%d is: %d\n",i+1,number[i]);
    }


    // printf("enter number1 :");
    // scanf("%d",&number1);
    // printf("enter number2 :");
    // scanf("%d",&number2);
    // printf("enter number3 :");
    // scanf("%d",&number3);

    // printf("number 1 is %d\n",number1);
    // printf("number 2 is %d\n",number2);
    // printf("number 3 is %d\n",number3);
    return 0;
}