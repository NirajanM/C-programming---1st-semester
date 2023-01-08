//xuteko raixa switch
#include<stdio.h>

int main()
{
    int n;
    printf("enter the number from 1-7:");
    scanf("%d",&n);

    // if(n==1){
    //     printf("day is sunday\n");
    // }
    // else if(n==2){
    //     printf("day is monday\n");
    // }
    // else if(n==3){
    //     printf("day is tuesday\n");
    // }
    // else if(n==4){
    //     printf("day is wednesday\n");
    // }
    // else if(n==5){
    //     printf("day is thursday\n");
    // }
    // else if(n==6){
    //     printf("day is friday\n");
    // }
    // else if(n==7){
    //     printf("day is saturday\n");
    // }
    // else{
    //     printf("invalid input");
    // }

    switch (n)
    {
    case 1:
    
    case 2:

    case 3:
        printf("day is tue");
        break;

    case 4:
        printf("day is wed");
        break;

    case 5:
        printf("day is thu");
        break;

    case 6:
        printf("day is fri");
        break;

    case 7:
        printf("day is sat");
        break;

    default:
        printf("invalid input");
        break;
    }

    printf("\nswitch terminated\n");

    

    return 0;
}