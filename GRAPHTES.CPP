
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main(void)
{
 clrscr();

 int graphdriver=DETECT, graphmode;
 initgraph (&graphdriver, &graphmode, "c:..\\bgi");
 moveto(6,6);
 lineto(6,40);

 circle(400,200,40);
 getch();
 closegraph();
}