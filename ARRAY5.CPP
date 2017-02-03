//Emilie Eggleston
//01-17-01
//Integer Arrays #5

#include <conio.h>
#include <iostream.h>
#include <apstring.h>
#include <iomanip.h>

void main(void)
{
clrscr();

int
 j,
 x,
 num[20];       //identifiers

apstring
 name[20];

//assigning x
cout<<"How many kids did sit-ups? ";
cin>>x;

//loop to assign names and # of sit-ups
for(j=0; j<x; j++)
{
  cout<<"Enter child's name and # of sit-ups per min: ";
  cin>>name[j]>>num[j];
}

//outputting tables with loops and if statements
cout<<"\n0-11  needs more help\n";

for(j=0; j<x; j++)
{

	if(num[j]>=0 && num[j]<=11)
	{
	cout<<name[j]<<endl;
	}
}

cout<<"\n12-20  below average\n";

for(j=0; j<x; j++)
{

	if(num[j]>=12 && num[j]<=20)
	{
	cout<<name[j]<<endl;
	}
}

cout<<"\n21-36  average\n";

for(j=0; j<x; j++)
{

	if(num[j]>=21 && num[j]<=36)
	{
	cout<<name[j]<<endl;
	}
}

cout<<"\n37-?  outstanding!\n";

for(j=0; j<x; j++)
{

	if(num[j]>=37)
	{
	cout<<name[j]<<endl;
	}
}
//the end
}