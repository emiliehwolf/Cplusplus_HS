//Emilie Eggleston   *_*
//10-27-00
//Pg. 286 #20
//Gushers
//This program will tell you the profit you made for a certain well

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <apstring.h>

int main()
{
clrscr();

apstring
 well,        //My identifiers
 sulfer;

float
 vol=0,
 digcost=0,
 sulfcost=0,
 total=0,
 unit=0,
 wellgain,
 percent=0;

//Assigning well type
cout<<"What type of well is it? (Pick a letter)";
cout<<"\nO = Oil";
cout<<"\nG = Gas";
cout<<"\nD = Dry\n";
cin>>well;

//Assigning digging cost
cout<<"What was the digging cost? ";
cin>>digcost;

//If statements for oil and gas wells to find volume and sulfer percentage
if(well=="O" || well=="o" || well=="G" || well=="g")
{
cout<<"What is the volume of gas or oil found? ";
cin>>vol;

cout<<"Does it contain sulfer? Y/N ";
cin>>sulfer;

	if(sulfer=="Y" || sulfer=="y")
	{
	sulfer="Yes";
	cout<<"What is the percentage of sulfer? (in decimal form please) ";
	cin>>percent;
	}

	else
	{
	sulfer="No";
	}
}

//Assigning price units for gas and oil
if(well=="G" || well=="g")
{
well="Gas";
unit=2.20;
}

if(well=="o" || well== "O")
{
well="Oil";
unit=5.50;
}

//Formula for sulfer cost and wellgain
sulfcost=percent*vol*unit;
wellgain=vol*unit;

//Very important formula for finding final profit
total=wellgain - sulfcost - digcost;

//Table form for output
cout<<"\nType of well:\t\t"<<well;
printf("\nVolume:\t\t\t%8.2f",vol);
cout<<"\nSulfur:\t\t\t"<<sulfer;
printf("\nPercent of Sulfur:\t%1.2f",percent);
printf("\n\nWell profit:\t\t$%9.2f",wellgain);
printf("\nDigging cost:\t\t$%9.2f",digcost);
printf("\nSulfur cost:\t\t$%9.2f",sulfcost);


//Output for profit
printf("\n\nYour profit is:  $%10.2f",total);

//If statement for gushers (over 50,000)
if(total>=50000)
{
cout<<"\nYou have a gusher!";
}

//The end
return 0;
}