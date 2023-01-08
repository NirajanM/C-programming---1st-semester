// WAP to draw a circle using graphiics function.
// exam ma yesari nai garney ho , tara vs code haru ma chaldaina graphics function, works in turbo c++;....
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    circle(300, 222, 70);
    getch();
    closegraph();
}