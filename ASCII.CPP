#include <iostream.h>
#include <conio.h>

void main (void)
{
clrscr();

int num=1,
x=0;

char sym=1;

for(x=0;x<100;x++)
{
 cout<<num<<sym<<"  ";
 num++;
 sym++;
}

getch();
}