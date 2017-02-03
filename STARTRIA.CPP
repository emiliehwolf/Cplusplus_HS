//Emilie Eggleston
//11-16-00
//This program will use loops to make a picture
//Pg 304: d

#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

void main(void)
{
clrscr();

int
 a=9,
 x=1,      //Identifiers
 y=1,
 z=9;

//Loop for lines 1 to 5
for(x=1; x<=5; x++)
{

//Set width so the asterics align
a=a+1;
cout<< setw(a);

//A loop in a loop for a variable to change number of ouput asterics
for(y=1; y<=z; y++)
{

//output for asteric
cout<<"*";
}

//goes to a new line at end of loop
cout<<endl;
//changes variable, z
z=z-2;
}
//The end
}