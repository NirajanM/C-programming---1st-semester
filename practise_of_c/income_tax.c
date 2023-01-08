#include<stdio.h>
// salary  tax
// 2.5-5   5
// 5-10    20
// 10+     30

int main(){
    int salary;
    int tax=0;
    printf("enter your salary : ");
    scanf("%d",&salary);

        if(salary>250000 && salary<=500000)
        {
        tax=tax+(5*(salary-250000))/100;
        }
      
        if(salary>500000 && salary<=1000000)
       {
        tax=tax+(20*(salary-500000)/100);
        }

       if(salary>1000000){
        tax=tax+(30*(salary-1000000)/100);
        }

        else{
            tax==0;
        }

    printf("your tax is %d",tax);

    return 0;
}