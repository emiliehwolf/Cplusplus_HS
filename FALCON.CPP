//Emilie Eggleston
//Structures #8
//4-23-01
//This program will keep records for the Falcon Manufacturing Company.

#include <iostream.h>
#include <conio.h>
#include <apstring.h>
#include <iomanip.h>
#include <fstream.h>
#include <iomanip.h>

void main (void)
{
clrscr();

int
 x=0,    //identifiers
 j=0;

//structure to keep computerized records
struct rec
{
 apstring
  name,
  address,
  city,
  state;
 long int
  zip,
  limit;
 char
  ib;
};

//inputting text file into array
rec fal [30];
ifstream input ("A:FALCON.TXT",ios::in);

while (!input.eof())
{
 input>>fal[j].name;
 input>>fal[j].address;
 input>>fal[j].city;
 input>>fal[j].state;
 input>>fal[j].zip;
 input>>fal[j].limit;
 input>>fal[j].ib;
 j++;
}
j--;

//output for title and headings
cout<<"                                BUSINESSES\n";
cout<<setw(8)<<"Name"<<setw(15)<<"Address"<<setw(12)<<"City"<<setw(8)<<"State";
cout<<setw(12)<<"Zip"<<setw(15)<<"Credit Limit"<<endl<<endl;

//for loop and if statement to find records that are businesses
for(x=0;x<j;x++)
{
 if(fal[x].ib=='B' || fal[x].ib=='b')
 {
  cout<<setw(8)<<fal[x].name<<setw(15)<<fal[x].address<<setw(12)<<fal[x].city;
  cout<<setw(8)<<fal[x].state<<setw(12)<<fal[x].zip<<setw(15)<<fal[x].limit;
  cout<<endl;
 }
}

//output for title and headings
cout<<endl<<endl<<"                                INDIVIDUAL\n";
cout<<setw(8)<<"Name"<<setw(15)<<"Address"<<setw(12)<<"City"<<setw(8)<<"State";
cout<<setw(12)<<"Zip"<<setw(15)<<"Credit Limit"<<endl<<endl;

//for loop and if statement to find records that are individuals
for(x=0;x<j;x++)
{
 if(fal[x].ib=='I' || fal[x].ib=='i')
 {
  cout<<setw(8)<<fal[x].name<<setw(15)<<fal[x].address<<setw(12)<<fal[x].city;
  cout<<setw(8)<<fal[x].state<<setw(12)<<fal[x].zip<<setw(15)<<fal[x].limit;
  cout<<endl;
 }
}

//the end
}