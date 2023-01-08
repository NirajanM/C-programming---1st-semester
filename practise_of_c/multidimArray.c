#include<stdio.h>

int main(){

    int tstd,tsub;

    printf("how many students entry do you want? : ");
    scanf("%d",&tstd);

    printf("how many subjects are there? : ");
    scanf("%d",&tsub);

    int str[tstd][tsub];

    for(int i=0 ; i<tstd ; i++){
        for(int j=0 ; j<tsub ; j++){
              printf("enter the marks of student %d in subject %d : ", i+1,j+1);
              scanf("%d",&str[i][j]);
        }
    }

    
    for(int i=0 ; i<tstd ; i++){
        for(int j=0 ; j<tsub ; j++){
              printf("the marks of student %d in subject %d is : %d \n", i+1,j+1,str[i][j]);
        }
    }

    return 0;
}