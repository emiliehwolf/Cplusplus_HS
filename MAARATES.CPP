//Emilie Eggleston
//11-2-00
//Pg. 286  #21
//This program will ask for mileage and compute amount of reimbursement

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main(void)
{
clrscr();

int
 mile=0,
 mileage=0;     //Identifiers

float
 cost=0,
 rate=0,
 total=0;

//Assigning Mileage
cout<<"What is the number of round-trip miles? ";
cin>>mileage;

//If statements for rates
if (mileage>=0 && mileage<=500)
{
 rate=.15;
}

if (mileage>500 && mileage<=1000)
{
 cost=75;
 rate=.12;
 mile=500;
}

if (mileage>1000 && mileage<=1500)
{
 cost=135;
 rate=.10;
 mile=1000;
}

if (mileage>1500 && mileage<=2000)
{
 cost=185;
 rate=.08;
 mile=1500;
}

if (mileage>2000 && mileage<=3000)
{
 cost=225;
 rate=.06;
 mile=2000;
}

if (mileage>3000)
{
 cost=285;
 rate=.05;
 mile=3000;
}

//Formula
total=(mileage-mile)*rate + cost;

//Output
printf("Your reimbursement for %d miles is $%4.2f",mileage,total);

//The end
}