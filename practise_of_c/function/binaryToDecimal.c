#include<stdio.h>
#include<math.h>

int giveDecimal(int binary);

int main()
{
    int binary;
    printf("enter binary number:");
    scanf("%d",&binary);
    printf("decimal conversion of given binary '%d' is %d",binary,giveDecimal(binary));
    return 0;
}

int giveDecimal(int binary){
    int decimal=0;
    int lastDigit=0;
    int i=0;
    while(binary>0)
    {
        lastDigit=binary%10;
        decimal=decimal+lastDigit*pow(2,i);
        i++;
        binary=binary/10;
    }
    return decimal;
}