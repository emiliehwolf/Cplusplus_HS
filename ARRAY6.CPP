//Emilie Eggleston
//1-18-01
//Integer Arrays #6

#include <iostream.h>
#include <conio.h>

void main(void)
{
clrscr();

int
 count=0,
 j,        //identifiers
 a[10],
 b[10];

//for loop to enter numbers for both arrays
for(j=0; j<10; j++)
{
	cout<<"(A) Enter a number ";
	cin>>a[j];

	cout<<"(B) Enter a number ";
	cin>>b[j];

	//count to find how many are identical
	if(a[j] == b[j])
	count++;
}

//output for neat little table
cout<<"\nGroup A\tGroup B\n";

for(j=0; j<10; j++)
{
	cout<<a[j]<<"\t"<<b[j]<<endl;
}

//if and else statements for final ouput
if(count == 10)
{
	cout<<"The two arrays were identical.";
}

else
{
	cout<<"The two arrays were not identical.";
}
//the end
}