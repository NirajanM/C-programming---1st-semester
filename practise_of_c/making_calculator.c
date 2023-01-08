#include<stdio.h>
#include<conio.h>

int main()
{
    char input;

    printf("tapai yo madhye k garna chahanu hunxa-\nmultiplication-enter M\n");
    printf("substraction-enter S\n addition-enter A\n Division-enter D\n");
    scanf("%c",&input);
    
    // ascii value M=77
    // ascii value S=83
    // ascii value A=65
    // ascii value D=68


     if(input==77)
    {  float f,g;
       printf("enter two number\n");
       scanf("%f %f",&f,&g);
       printf("%f*%f=%f",f,g,f*g);
    }
    if(input==83)
    {  float f,g;
       printf("enter two number\n");
       scanf("%f %f",&f,&g);
       printf("%f-%f=%f",f,g,f-g);
    }
    if(input==65)
    {  float f,g;
       printf("enter two number\n");
       scanf("%f %f",&f,&g);
       printf("%f+%f=%f",f,g,f+g);
    }
    if(input==68)
    {  float f,g;
       printf("enter two number\n");
       scanf("%f %f",&f,&g);
       printf("%f/%f=%.2f",f,g,f/g);
    }
    else{}

    return 0;
}