#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,try=1,holduseratlast;
    srand(time(0));
    number = rand()%100 + 1;
    
    printf("***random number successfully generated***\n");
    printf("guess the number between 1-100 : ");
    scanf("%d",&guess);

   while(guess!=number){
       if(guess<number){
           printf("larger number please : ");
            scanf("%d",&guess);
            }
        else{
             printf("smaller number please : ");
            scanf("%d",&guess);
        }
        try++;
    }
    if(guess==number){
        printf("your guess is correct in %d tries \n\n",try);
    }

    printf("type anything and press enter to continue : ");
    scanf("%d",&holduseratlast);

    return 0;
}