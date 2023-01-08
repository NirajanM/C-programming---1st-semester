#include<stdio.h>
#include<graphics.h>


int main()
{
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"C:\Program Files (x86)\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin");
    circle(100,200,12);
    return 0;
}