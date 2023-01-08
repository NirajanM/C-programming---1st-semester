#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
     if(a%97==0){
         printf("the number is divisible by 97\n");
     }
     else{
         printf("the number is not divisible by 97\n");
     }
    return 0;
}