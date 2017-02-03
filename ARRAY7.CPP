//Emilie Eggleston
//1-18-01
//Integer Arrays #7

#include <iostream.h>
#include <conio.h>

void main(void)
{
clrscr();

int
 j=0,          //identifiers
 sum=0,
 num[10];

//for loop to assign 10 integers in an array
for(j=0; j<10; j++)
{
	cout<<"Enter a number ";
	cin>>num[j];

	//finds the sum of only odd subscripts
	if(j%2==1)
	{
		sum=sum+num[j];
	}
}

//output for table
cout<<"The odd subscripts are: \n";

//loop to output numbers in odd subscripts
for(j=0; j<10; j++)
{
	if(j%2==1)
	{
		cout<<num[j]<<endl;
	}
}

//Final output of sum
cout<<"The sum of the odd subscripts is "<<sum<<".\n";
//the end
}

