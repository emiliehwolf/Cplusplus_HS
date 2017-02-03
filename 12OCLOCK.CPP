//Emilie Eggleston
//Aug 15, '01
//Beginning Program #4
//Seconds since "struck twelve"

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//prototypes for functions
void a (int h, int m, int s, long int &t);

void main(void)
{
clrscr();

int
 hour=0,
 min=0,    //identifiers
 sec=0;

long int
 tot=0;

char
 yn;

//do while loop for repeating program
do
{
 clrscr();

 //inputting time
 cout<<"Enter the hour: ";
 cin>>hour;
 cout<<endl<<"Enter the minutes: ";
 cin>>min;
 cout<<endl<<"Enter the seconds: ";
 cin>>sec;

 //calling function
 a (hour, min, sec, tot);

 //output
 cout<<endl<<"It has been "<<tot<<" seconds since 12 o'clock.";

 //asking question for do while loop
cout<<endl<<"Do you want to run the program again? (y/n) ";
cin>>yn;
}
while (yn=='y'||yn=='Y');

//end of main program
}

//function for finding seconds
void a (int h, int m, int s, long int &t)
{
 if (h==12)
 {
  t=s+(m*60);
 }
 else
 {
  t=(3600*h)+(60*m)+s;
 }
}