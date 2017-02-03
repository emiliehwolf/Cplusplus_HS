//Emilie Eggleston
//1-30-01
//Functions #1
//This program will take numbers from a text file and tell you if
//they are positive, negative, or zero

#include <conio.h>
#include <iostream.h>
#include <fstream.h>
void print_pos();
void print_neg();        //prototypes
void print_zero();

int main()
{
clrscr();

int
 j,          //identifiers
 x,
 a[50];

//assigning text for input
ifstream input ("A:number.txt",ios::in);

//assigning x
cout<<"How many numbers do you want to test? (max 50) ";
cin>>x;

//loop to input text file
for(j=0; j<x; j++)
{
	input>>a[j];
}

//loop to output
for(j=0; j<x; j++)
{
	cout<<a[j];

	//3 if statements for pos, neg, and zero
	if(a[j]<0)
	print_neg();

	if(a[j]==0)
	print_zero();

	if(a[j]>0)
	print_pos();
}

return 0;
}

//Output for neg, pos, and zero

void print_neg()
{
cout<<"   The number is negative\n";
}

void print_zero()
{
cout<<"   The number is zero\n";
}

void print_pos()
{
cout<<"   The number is positive\n";
}