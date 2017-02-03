//Emilie Eggleston
//10-10-00
//Sink or float?
/*This program will take the mass and volume of an object and tell you if it
sinks or floats in water*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main(void)
{
clrscr();

float
 mass,  //My identifiers in float so density can be a decimal.
 vol,
 den;

//assigning mass and volume
cout<<"Enter the mass and volume of your substance: ";
cin>>mass>>vol;

//Formula for density
den=mass/vol;

//If statement for floating objects
if(den<1)
{
printf("Your substance has a density of %3.2f g/cm^3, so it will float.\n",den);
}

//Else statement for sinking objects
else
{
printf("Your substance has a density of %3.2f g/cm^3, so it will sink.",den);
}
//The End
}