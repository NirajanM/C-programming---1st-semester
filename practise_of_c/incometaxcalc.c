#include<stdio.h>

int main(){
    int income,tax;
    printf("enter you income : ");
    scanf("%d",&income);
    
    if(income>=250000 || income<=500000){
        tax=((income-250000)*5)/100;}
            

    if(income>500000 || income<=1000000){
        tax=((income-500000)*20)/100;
    }

    if(income>1000000){
        tax=((income-1000000)*30)/100;
    }

    else{tax==0;}

    printf("the tax on your income is %d",tax);
    return 0;
}