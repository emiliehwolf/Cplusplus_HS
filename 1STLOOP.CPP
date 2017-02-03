//Emilie Eggleston
//11-9-00
//Pg 367  #21
//This program will print a list of positive
//integers less than 500 that are divisible by either 5 or 7

#include <iostream.h>
#include <conio.h>

void main(void)
{
clrscr();

int
 x,               //My identifiers
 count=0;

//output is placed before loop
cout<<"All the numbers divisible by 5 or 7 are: \n";

//loop for numbers between 1 and 500
for (x=1; x<500; x++)
{
 if (x%5==0 ||x%7==0)
   {                   //if statement for numbers divisible by 5 or 7
    cout<<x<<"\n";
    count++;
   }
}

//Final output for the amount of numbers div by 5 or 7
cout<<"There were "<<count<<" numbers divisible by either 5 or 7";
}

