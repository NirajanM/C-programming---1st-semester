// last question of lab2
#include<stdio.h>
#include<math.h>

int main(){
    int number;
    float l,b,area,s,a,c,d,perimeter,r,v,tsa,h,p,t,i,variable,f,x1,x2;
    printf("***assignment by Nirajan Malla***\n");
    printf("1-Area of triangle\n2-Area of triangle by sides\n3-Area of triangle by 2 side and opposite angle\n");
    printf("4-Area and perimeter of rectangle\n5-Area and perimeter of square\n6-Area and perimeter of circle\n");
    printf("7-Volume and TSA of cylinder\n8-Volume and TSA of cone\n9-Volume and area of sphere\n");
    printf("10-Compound interest\n11-Convert farenheit to celcius\n12-Roots of quadratic equation\n");
    printf("what you want to calculate(enter its number 1-12):");
    scanf("%d",&number);

    switch(number)
    {
        case 1:
        printf("enter the length and breadth:\n");
        scanf("%f%f",&l,&b);
        area=0.5*l*b;
        printf("the area of triangle is %.2f",area);
        break;

        case 2:
        printf("enter the value of side a,b and c:\n");
        scanf("%f%f%f",&a,&b,&c);
        s=(a+b+c)/2;
        printf("the area of triangle is %f",sqrt(s*(s-a)*(s-b)*(s-c)));
        break;

        case 3:
        printf("enter the value of side a,b and angle of c in degree:\n");
        scanf("%f%f%f",&a,&b,&c);
        d=0.5*a*b*sin((c*22)/(180*7));
        printf("the area of triangle is %.2f",d);
        break;
        
        case 4:
        printf("enter the length and breadth:\n");
        scanf("%f%f",&l,&b);
        a=l*b;
        p=2*(l+b);
        printf("the area of rectangle is %.2f and its perimeter is %.2f",a,p);
        break;

        case 5:
        printf("enter the length:\n");
        scanf("%f",&l);
        a=pow(l,2);
        p=4*l;
        printf("the area of square is %.2f and its perimeter is %.2f",a,p);
        break;

        case 6:
        printf("enter the radius of circle:\n");
        scanf("%f",&r);
        a=pow(r,2)*22/7;
        p=2*r*22/7;
        printf("the area of circle is %.2f and its perimeter is %.2f",a,p);
        break;

        case 7:
        printf("enter the radius and height:\n");
        scanf("%f%f",&r,&h);
        v=pow(r,2)*h*22/7;
        tsa=(r+h)*2*r*22/7;
        printf("the volume of cylinder is %.2f and\nits total surface area is %.2f",v,tsa);
        break;

        case 8:
        printf("enter the radius, height of a cone:\n");
        scanf("%f%f",&r,&h);
        l=sqrt(r*r+h*h);
        v=pow(r,2)*h*22/(7*3);
        tsa=(l+r)*r*22/7;
        printf("the volume of cone is %.2f and\nits total surface area is %.2f",v,tsa);
        break;

        case 9:
        printf("enter the radius of sphere:\n");
        scanf("%f",&r);
        v=pow(r,3)*4*22/(7*3);
        a=4*r*r*22/7;
        printf("the volume of sphere is %.2f and its area is %.2f",v,a);
        break;

        case 10:
        printf("enter principle,time and rate:\n");
        scanf("%f%f%f",&p,&t,&r);
        variable=1+(r/100);
        i=p*(pow(variable,t)-1);
        printf("your compound interest is %.2f",i);
        break;

        case 11:
        printf("enter the value of farenheit:");
        scanf("%f",&f);
        c=5*(f-32)/9;
        printf("the value in celcius is %.2f",c);
        break;

        case 12:
        printf("enter the value of a,b & c:\n");
        scanf("%f%f%f",&a,&b,&c);
        d=b*b-4*a*c;
            if(d<0)
            {
                printf("imaginary roots");
            }
            else
            {
            p=sqrt(d);
            x1=(-b+p)/(2*a);
            x2=(-b-p)/(2*a);
            printf("the value of x1 is %.2f and x2 is %.2f",x1,x2);
            }
        break;

        default:
        printf("invalid input");
        break;
        }

    return 0;
}