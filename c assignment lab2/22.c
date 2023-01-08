#include<stdio.h>
#include<math.h>


int main(){
    int number;
    float p,t,r,d;
    float variable,i;
    printf("***asssignment by Nirajan Malla***\n");
    printf("1-simple interest\n2-compound interest\n3-exit\n");
    printf("enter what you want to calculate:");
    scanf("%d",&number);
    switch(number)
    {
        case 1:
        printf("enter principle,rate and time:\n");
        scanf("%f%f%f",&p,&r,&t);
        printf("simple interest is RS %.2f",(p*t*r)/100);
        break;

        case 2:
        printf("enter principle,rate and time:\n");
        scanf("%f%f%f",&p,&r,&t);
        variable=1+(r/100);
        i=p*(pow(variable,t)-1);
        printf("your compound interest is %.2f",i);
        break;
        
        case 3:      
        printf("exiting the program....");
        break;

        default:
        printf("invalid input");
        break;

    }
   
    return 0;
}