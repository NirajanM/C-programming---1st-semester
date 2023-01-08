#include<stdio.h>

struct arrow {
    int x;
    int y;
};

int main(){

    struct arrow a1;
    struct arrow *ptr;
    ptr=&a1;
    ptr->x=52;//  '->' this is arrow operator replacement of (*___).
    // arrow operator stands for value of ... at address ...
    (*ptr).y=62;
    printf("value of a1.x is %d\nAnd a1.y is %d",a1.x,a1.y);
    
    return 0;
}