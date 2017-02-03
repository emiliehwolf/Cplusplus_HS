//Emilie Eggleston
//1-18-01
//Integer Arrays #8

#include <iostream.h>
#include <conio.h>

void main(void)
{
clrscr();

int
 j,
 z,         //identifiers
 x[20],
 y[20],
 sum=0,
 p[20];

//Assigning Z
cout<<"How many integers should be in the arrays (max 20)? ";
cin>>z;

//For loop to assign x, y, and the product of them
for(j=0; j<z; j++)
{
	cout<<"(X) Enter a number ";
	cin>>x[j];

	cout<<"(Y) Enter a number ";
	cin>>y[j];

	//formuals
	p[j] = x[j]*y[j];
	sum=sum+p[j];
}

//for loop to output a list of products
for(j=0; j<z; j++)
{
	cout<<p[j]<<endl;
}

//final output for sum of products
cout<<"The sum of the products of the corresponding array elements is "<<sum;

//the end
}