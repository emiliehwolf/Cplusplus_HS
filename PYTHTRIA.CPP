//Emilie Eggleston
//10-12-00
//Pythtriangle
/*This program will ask for the lengths of a triangle and then tell you if it
is a right triangle or not*/

#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();

int
 side1,
 side2,
 side3,           //My identifiers
 leg1,
 leg2,
 hyp;

//Assigning the sides
cout<<"Enter the lengths of three sides of a triangle: ";
cin>>side1>>side2>>side3;

//These 3 if statements will find out which side is the hypotenuse
if(side1>side2&&side1>side3)
{
hyp=side1;
leg1=side2;
leg2=side3;
}

if(side2>side1&&side2>side3)
{
hyp=side2;
leg1=side1;
leg2=side3;
}

if(side3>side1&&side3>side2)
{
hyp=side3;
leg1=side1;
leg2=side2;
}

//This will check the dimensions do determine whether it's a right triangle or not
if((leg1*leg1)+(leg2*leg2)==(hyp*hyp))
{
cout<<"Your dimensions make a right triangle.";
}

//Else statement for triangles that aren't right
else
{
cout<<"Your dimensions do not make a right triangle.";
}

return 0;
}