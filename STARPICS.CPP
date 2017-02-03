//Emilie Eggleston
//11-15-00
//Page 304: b & c
//This loop program will output little pictures using asterics

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main(void)
{
clrscr ();

int
 line=1,
 y=5,
 z=1,
 x=3;       //Identifiers for line and setwidth

//Loop for 8 lines
for(line=1; line<=8; line++)
{

//Formula for changing setwidth
x=x++;

//Output for the ***
cout<< setw (x) <<"***\n";

}

//First cout for next loop
cout<<"    *\n";

//loop for lines 10 to 12
for(line=10; line<=12; line++)
{

//formulas for changing set width
z=z+2;
y=y-1;

//ouput for 2 asterics
cout<< setw (y) <<"*"<< setw (z)<<"*\n";

}
//another ouput line of asterics
cout<<"***   ***\n";

//loop for lines 14 and 15
for(line=14; line<=15; line++)
{

//chaged set widths
y=3;
z=5;

//Output for 2 asterics
cout<< setw (y) <<"*"<< setw (z) <<"*\n";
}
//the end
}