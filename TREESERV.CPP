//Emilie Eggleston *_*
//12-13-00
//Pg 365 #16 Orlando Tree Service, Inc.
//This program will get input and create a bill

//headers
#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main(void)
{
clrscr();

float
 total=0,
 hour=0;

int            //Identifiers
 subtotal=0,
 tree=0,
 stump=0,
 j=1,
 xtra=0,
 diam=0,
 totx=0;

char
 yn='N';

//Entering trees, hours, and stumps
cout<<"Mr. Sorwind, how many trees were removed? ";
cin>>tree;

cout<<"How many hours were spent trimming trees, Mr. Sorwind? ";
cin>>hour;

cout<<"How many stumps needed to be grinded? ";
cin>>stump;

//loop to ask for the diameter of each stump
for(j=1; j<=stump; j++)
{

   cout<<"Stump "<<j<<".  Enter the diameter of the stump in inches: ";
   cin>>diam;

   //if statement for stumps with a diameter over 10 inches
   if(diam>10)
   {
     xtra=diam-10;
   }
   totx=xtra+totx;
}

//Formulas (pretty complicated)
tree=tree*500;
hour=hour*80;
stump=stump*25;
totx=totx*2;
stump=stump+totx;
subtotal=tree+hour+stump;

//if statement for the 10% discount
if(subtotal>1000)
{
 total=subtotal*.9;
 yn='Y';
}

else
 total=subtotal;

//The final output for the bill
cout<<"\nTree Removal:\t\t$"<<tree;
cout<<"\nTree Trimming:\t\t$"<<hour;
cout<<"\nStump Grinding:\t\t$"<<stump;
cout<<"\n10 Percent Discount:\t"<<yn;
printf("\n\nTotal:\t\t\t$%6.2f",total);

//the end
}