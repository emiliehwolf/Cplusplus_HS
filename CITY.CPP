//Emilie Eggleston
//Structures #2
//4-10-01

#include <conio.h>
#include <iostream.h>
#include <apstring.h>
#include <fstream.h>
#include <iomanip.h>

void main(void)
{
clrscr();

int
 x=0,     //identifiers
 j=0;

 //structure
struct town
{
 apstring
  name;
 long int
  pop;
 apstring
  state;
};

//inputting the structure into array
town city [20];
ifstream input("A:CITY.TXT",ios::in);

while (!input.eof())
{
input>>city[x].name;
input>>city[x].pop;
input>>city[x].state;
x++;
}
x--;

//Output for cities with populations over 100000
cout<<"Cities with populations of more than 100,000\n";
cout<<setw(15)<<"City"<<setw(15)<<"Population"<<setw(15)<<"State\n\n";

//for loop and if statement to find cities with a pop over 100000
for(j=0;j<x;j++)
{
 if(city[j].pop>100000)
 {
  //outputting the names of the cities
  cout<<setw(15)<<city[j].name<<setw(15)<<city[j].pop<<setw(15);
  cout<<city[j].state<<endl;
 }
}

}