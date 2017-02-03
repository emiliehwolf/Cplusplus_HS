//Emilie Eggleston
//10-13-00
//Income Tax
/*This program will ask for a person's income and then tell you what tax
is owed rounded to the nearest dollar.*/

#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();

int
 inc=0;

float    //My identifiers
 rate=0,
 tax=0;

//Assigning income
cout<<"What is your income? $";
cin>>inc;

//If statements for each tax rate
if(inc>=0 && inc<=5000)
{
rate=0;
}

if(inc>5000 && inc<=10000)
{
rate=.03;
}

if(inc>10000 && inc<=20000)
{
rate=.055;
}

if(inc>20000 && inc<=40000)
{
rate=.108;
}

if(inc>40000)
{
rate=.237;
}

//Formula for tax
tax=inc*rate;

//Output for tax owed
cout<<"Your income was $"<<inc<<", so you owe $"<<tax<<" in taxes.";

return 0;
}