//Emilie Eggleston
//2-05-01
//Functions #3
/*This program will ask for two sides of a triangle and use
functions to find the third side*/

#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

//prototypes for functions
void form1 (float &sidea, float &sideb, float &sidec);
void form2 (float &sidea, float &sideb, float &sidec);
void output (float sidea, float sideb, float sidec);

float main()
{
clrscr();

float
 a=0,
 b=0,     //identifiers
 c=0;

float
 x;

char
 yn;

//do-while loop for repeating program
do
{

//assigning x
cout<<"Do you want to enter: \n(1) Two legs\nor\n(2) A leg and hypotenuse\n";
cin>>x;

//2 if statements for 2 functions for 2 different formuals
if(x==1)
{
form1 (a, b, c);
}

if(x==2)
{
form2 (a, b, c);
}

//calling output function
output (a, b, c);

//assigning yn for either yes or no
cout<<"\nDo you want to run the program again? y/n ";
cin>>yn;

}
while (yn=='y' || yn=='Y');

return 0;
}

//assigning sides a and b
void form1 (float &sidea, float &sideb, float&sidec)
{
 cout<<"Enter the lengths of the two sides ";
 cin>>sidea>>sideb;

 //formula for sidec
 sidec=sqrt((sidea*sidea)+(sideb*sideb));
}

//assigning sides a and c
void form2 (float &sidea, float &sideb, float &sidec)
{
 cout<<"Enter the length of leg ";
 cin>>sidea;
 cout<<"Enter length of hypotenuse ";
 cin>>sidec;

 if(sidec<sidea)
 {
  cout<<"The hypotenuse must be longer than the side; Re-enter the number ";
  cin>>sidec;
 }

 //formula for sideb
 sideb=sqrt((sidec*sidec)-(sidea*sidea));
}

//function for final output
void output (float sidea, float sideb, float sidec)
{
 cout<<"The length of the legs are "<<sidea<<" and "<<sideb<<".\n";
 cout<<"The length of the hypotenuse is "<<sidec<<".\n";
}