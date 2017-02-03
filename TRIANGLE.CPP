//Emilie Eggleston
//10-6-00
//What kind of triangle?
/*This program will take given lengths of a triangle and tell you whether it's
/scalene, isosceles, or equilateral*/

#include <iostream.h>
#include <conio.h>

void main(void)
{
clrscr();

int
 side1,    //My identifiers
 side2,
 side3;

//Assigning the sides as side1, side2, and side3
cout<<"Enter the three lengths of a triangle: ";
cin>>side1>>side2>>side3;

//If statement for isosceles
if(side1==side2||side1==side3||side2==side3)
{

 //If statement within if statement for equilateral triangles
 if(side1==side2&&side3==side1)
 {
  cout<<"The triangle is equilateral. \n";
 }

 else
 {
  cout<<"The triangle is isosceles.\n";
 }
}

//else statement for scalene triangles
else
{
 cout<<"The triangle is scalene.\n";
}
//the end
}