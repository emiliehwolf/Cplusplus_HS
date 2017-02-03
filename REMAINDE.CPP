//Emilie Eggleston
//10-4-00
//Elementary Division
//This program will take 2 numbers and divide the large
//number by the smaller one and get the answer in remainder form

#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();

int
 num1,
 num2,     //my identifiers
 large,
 small,
 q,
 r;

//Assigning the two numbers, num1 and num2
cout<<"Enter two numbers: ";
cin>>num1>>num2;

//Determining which number is larger
if(num1>num2)
{
large=num1;
small=num2;
}

else
{
large=num2;
small=num1;
}

//formulas for quotient and remainder if small isn't zero
if(small!=0)
{
q=large/small;
r=large%small;
cout<<large<<" divided by "<<small<<" equals "<<q<<" r. "<<r<<endl;
}

else
{
cout<<"You can not divide by zero.";
}

return 0;
}