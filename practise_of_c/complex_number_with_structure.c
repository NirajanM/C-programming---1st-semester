#include<stdio.h>

typedef struct complexnumber
{
    float rp;
    float ip;
}cn;

cn sum(cn *ptr)
{
    cn result;
    for(int j=0;j<5;j++)
    {
        result.rp+=(*&ptr[j]).rp;
        result.ip+=(*&ptr[j]).ip;

    }
    return result;
}

void display(cn *c)
{
    for(int i=0;i<5;i++)
    {
        printf("c[%d].rp : %.2f\n",i,(*&c[i]).rp);
        printf("c[%d].ip : %.2f\n",i,(*&c[i]).ip);
    }
}

int main(){
    cn c[5],res;
    for(int i=0;i<5;i++)
    {
        printf("enter the value of real part of C.N.%d :",i+1);
        scanf("%f",&c[i].rp);
        printf("enter the value of imaginary part of C.N.%d :",i+1);
        scanf("%f",&c[i].ip);
    }    
    res=sum(c);
    display(c);
    printf("sum of real part of complex numbers is %f\n",res.rp);
    printf("sum of imaginary part of complex numbers is %f\n",res.ip);
    printf("Therefore ,the sum of complex numbers is %.2f",res.rp+res.ip);
    return 0;
}