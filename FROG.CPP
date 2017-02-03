#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main(void)
{
clrscr();

int graphdriver = DETECT, graphmode;
initgraph(&graphdriver, &graphmode, "c:..\\bgi");
setbkcolor(BLACK);

setcolor(BLUE);
moveto(250,110);
lineto(125,110);
lineto(115,120);
lineto(115,125);
lineto(125,135);
setfillstyle(SOLID_FILL, BLUE);

moveto(185,50);
lineto(185,250);
lineto(190,260);
lineto(200,270);
lineto(210,275);

arc(120,300,360,310,75);

moveto(100,50);
lineto(125,75);

getch();
closegraph();

}