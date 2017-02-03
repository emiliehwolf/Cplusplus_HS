//Emilie Eggleston
//Structures #5
//This program will find all-stars with a structure
//4-12-01

#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <apstring.h>
#include <iomanip.h>

void main(void)
{
clrscr();

int
 x=0,     //identifiers
 j=0;

 //structure
struct list
{
 apstring
  name;
 int
  point,
  rebounds,
  assists;
};

//inputting the structure into array
list star [20];
ifstream input("A:STARS.TXT",ios::in);

while (!input.eof())
{
input>>star[x].name;
input>>star[x].point;
input>>star[x].rebounds;
input>>star[x].assists;
x++;
}
x--;

//output for title and data table
cout<<"                    ALL STARS"<<endl;
cout<<endl<<setw(10)<<"Name"<<setw(10)<<"Points"<<setw(10)<<"Rebounds";
cout<<setw(10)<<"Assists"<<endl<<endl;

//for loop and if statement to find all stars
for(j=0; j<x; j++)
{
 if(star[j].point>=20 && star[j].rebounds>=8 && star[j].assists>=5)
 {
  //final output
  cout<<setw(10)<<star[j].name<<setw(10)<<star[j].point<<setw(10)<<star[j].rebounds;
  cout<<setw(10)<<star[j].assists<<endl;
 }
}
//the end
}