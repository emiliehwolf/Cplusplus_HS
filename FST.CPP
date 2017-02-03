//Emilie Eggleston
//9-28-00
//The Rain
//More string variables... this program will combine variables and
//allow input and empty strings

#include <iostream.h>
#include <conio.h>
#include <apstring.h>
void main(void)
{
clrscr();

//My string variable
apstring
 first,
 second,
 third;

 //Assigning the variables
first="The";
second="rain";
third=first+' '+second;

//output for "the rain"
cout<<third<<endl;

//Creating empty strings for new input
first="";
second="";
third="";

//Assigning new variables
cout<<"Enter a new string for variable 1: ";
cin>>first;
cout<<"Enter a new string for variable 2: ";
cin>>second;

//Formula again
third=first+' '+second;

//And the final output of whatever was inputted
cout<<third;
}
