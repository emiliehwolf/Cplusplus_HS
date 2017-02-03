//Emilie Eggleston
//9-26-00
//String Variables
//This program will ask you for some info so that I may learn
//how to use string variables and getline to output a return address label

#include <iostream.h>
#include <conio.h>
#include <apstring.h>

void main(void)
{
clrscr();

//my identifiers (some have spaces and will be tricky)
apstring
 name,
 address,
 city,
 state,
 zip,
 tnum;

//Assigning name, address, city, state, zip, and telephone number
cout<<"Enter your first and last name: ";
getline (cin,name);

cout<<"Enter your address: ";
getline (cin,address);

cout<<"Enter your city: ";
cin>>city;

cout<<"Enter your state and zip code: ";
cin>>state>>zip;

cout<<"Enter your telephone number(w/ a dash or no spaces): ";
cin>>tnum;

//Info neatly placed in a return address label form
cout<<"\n\n"<<name<<endl;
cout<<address<<endl;
cout<<city<<", "<<state<<"   "<<zip<<endl;
cout<<tnum;

//And I'm done
}