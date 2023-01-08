#include<stdio.h>
#include<stdlib.h>

int main(){
    int number;
    float l,b,h,r;
    printf("***asssignment by Nirajan Malla***\n");
    printf("1-Volume of cuboid\n2-Total surface area of cuboid\n3-Area of circle\n4-Circumference of circle\n5-exit\n");
    printf("enter what you want to calculate:");
    scanf("%d",&number);
    switch(number)
    {
        case 1:
        printf("enter length, breadth and height of cuboid:\n");
        scanf("%f%f%f",&l,&b,&h);
        printf("area of cuboid is %.2f",l*b*h);
        break;

        case 2:
        printf("enter length, breadth and height of cuboid:\n");
        scanf("%f%f%f",&l,&b,&h);
        printf("TSA of cuboid is %.2f",2*(l*b+b*h+h*l));
        break;

        case 3:
        printf("enter the radius of circle:\n");
        scanf("%f",&r);
        printf("area of circle is %.2f",3.14*r*r);
        break;

        case 4:
        printf("enter the radius of circle:\n");
        scanf("%f",&r);
        printf("circumference of circle is %.2f",2*3.14*r);
        break;

        case 5:
        exit(1);
        break;

        default:
        printf("invalid input");
        break;

    }
   
    return 0;
}