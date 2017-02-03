//Emilie Eggleston *_*
//12-7-00
//Pg 286 #19 Sewage, Water, and Sanitation charges

#include <conio.h>
#include <stdio.h>
#include <iostream.h>

void main(void)
{
clrscr ();

int
 mon=0,
 gal=0,
 charge=0,
 x=0;           //My identifiers

float
 san=7.5,
 rate=0,
 tot=0;

char
 yn;

//do while loop for repeating program
do
{

   //inputting months and gallons
   cout<<"\nHow many months is the resident being billed? 1,2, or 3 ";
   cin>>mon;

   //if statement for incorrect # of months
   if(mon>3 || mon<1)
   {
      cout<<"Enter another number (1,2, or 3): ";
      cin>>mon;
   }

   cout<<"How many gallons of water was used by the resident? ";
   cin>>gal;

   //if statements for rate and charge of gallons used
   if (gal<1000)
      rate=.03;

   if (gal>=1000 || gal<2000)
   {
      charge=30;
      rate=.02;
      x=1000;
   }

   if (gal>=2000)
   {
      charge=50;
      rate=.015;
      x=2000;
   }

//Formula for Total
tot=(gal-x)*rate + charge*mon;

//Output for bill
cout<<"\nMonths: "<<mon<<endl<<"Gallons: "<<gal<<endl;
printf("Total Charge: $%6.2f",tot);

//inputting yes or no for repeating program
cout<<"\n\nDo you want to run the program again? Y/N ";
cin>>yn;
}
//while to end program or repeat it
while (yn=='y' || yn=='Y');

}