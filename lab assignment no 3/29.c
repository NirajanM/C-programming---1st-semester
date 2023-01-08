// Write a menu program for following menu using loop and switch.1.Area of Circle2. Circumferenceof Circle3. Exit
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    float r;
    char choice;
    printf("***asssignment by Nirajan Malla***\n");
    printf("What operation do you wanna perform?\n1.Area of circle\n2.Circumference of circle\n3.exit\n\n");
    do
    {
        printf("enter the corresponding number of the operation:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("enter the radius of circle:\n");
                scanf("%f",&r);
                printf("area of circle is %.2f\n\n",3.14*r*r);
                break;
            case 2:
                printf("enter the radius of circle:\n");
                scanf("%f",&r);
                printf("circumference of circle is %.2f\n\n",2*3.14*r);
                break;
            case 3:
                exit(1);
            default:
                printf("Wrong input!");
                break;
        }
        fflush(stdin);
        printf("Do you want to continue? : Y-yes/N-no\n");
        scanf("%c",&choice);
    }while(choice=='Y' || choice=='y');
    return 0;
}