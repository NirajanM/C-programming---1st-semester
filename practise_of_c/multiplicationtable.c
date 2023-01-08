#include<stdio.h>

int main(){
    
    int n,m;

    printf("enter the number you want multiplication table of : \n");
    scanf("%d",&n);

    printf("enter the number up to which you want the table : \n");
    scanf("%d",&m);

    int multiplication[m];

     printf("the multiplication table of %d is : \n",n); 

    for(int i=0 ; i<m; i++){
        multiplication[i]=n*(i+1);
          printf("%dx%d=%d\n",n,(i+1),multiplication[i]);
    }
    int wait;
    printf("type anything and press enter to exit : ");
    scanf("%d",&wait);
    return 0;
}