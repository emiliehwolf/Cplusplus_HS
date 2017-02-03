//Emilie Eggleston
//Aug 21, 2001
//Beginning Program #5
//This program asks for a # between 1 and 1000 and outputs its factors

#include <iostream.h>
#include <conio.h>

void main(void)
{

int
 ans=0,
 fac=0,
 num=0;
       //identifiers
char
 yn;

 //do while loop to ask if program should be repeated
do
{
 clrscr();

 //fac is reassigned to 0 each time you pick a new number
 fac=0;
 //inputting the number
 cout<<"Enter a number between 1 and 1000: ";
 cin>>num;

 //the output right before the loop
 cout<<endl<<"The factors of "<<num<<" are:\n\n";

//do while loop to find factors
do
{
  //adding one to fac each time it goes through the loop
  fac++;

  //formula for finding the two factors
  ans=num/fac;

 //if statement to check if factors are repeating and if the factors are
 //whole numbers
 if(ans>=fac && num%fac==0)
  cout<<fac<<" & "<<ans<<"  \n";

}
while(fac<=(num/2));

//end of the first do while loop to repeat program
cout<<endl<<"Do you want to run the program again? (y/n) ";
cin>>yn;
}
while (yn=='y'||yn=='Y');

//the end
}
