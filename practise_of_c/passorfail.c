#include<stdio.h>

int main(){
    float math,science,social;

    printf("enter the marks scored in maths : ");
    scanf("%f",&math);

    printf("enter the marks scored in science : ");
    scanf("%f",&science);

    printf("enter the marks scored in social : ");
    scanf("%f",&social);

    float total=(math+science+social)/3;

    if ((total<40) || math<33 || science<33 || social<33){
        printf("your total percentage is %0.2f and you failed",total);
    }
    else{
        printf("your total percentage is %0.2f and you passed",total);
    }
    return 0;
}