#include<stdio.h>
#include<stdlib.h>

int main(){
    int number;
    float l,b;
    printf("***asssignment by Nirajan Malla***\n");
    printf("1-Area of rectangle\n2-Perimeter of rectangle\n3-Area of square\n4-Perimeter of square\n5-exit\n");
    printf("enter what you want to calculate:");
    scanf("%d",&number);
    switch(number)
    {
        case 1:
        printf("enter length and breadth of rectangle:\n");
        scanf("%f%f",&l,&b);
        printf("area of rectangle is %.2f",l*b);
        break;

        case 2:
        printf("enter length and breadth of rectangle:\n");
        scanf("%f%f",&l,&b);
        printf("perimeter of rectangle is %.2f",2*(l+b));
        break;

        case 3:
        printf("enter length of a side square:\n");
        scanf("%f",&l);
        printf("area of square is %.2f",l*l);
        break;

        case 4:
        printf("enter length of a square:\n");
        scanf("%f",&l);
        printf("perimeter of square is %.2f",4*l);
        break;

        case 5:
        exit(1);

        default:
        printf("invalid input");

    }
   
    return 0;
}