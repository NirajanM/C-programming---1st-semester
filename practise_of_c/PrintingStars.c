#include<stdio.h>
//1-1
//2-3
//3-5
//4-7
//n-2n-1

void star(int number){

     if(number==1){
         printf("*\n");
            return;
        }

    star(number-1);
    
    
    for(int i=0;i<(2*number-1);i++){
        printf("*");
    }
    printf("\n");

} 

int main(){
    int num;
    printf("enter the number of row of the stars you want : ");
    scanf("%d",&num);
    star(num);
    
    return 0;
}