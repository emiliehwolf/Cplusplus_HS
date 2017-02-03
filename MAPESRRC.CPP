//Emilie Eggleston
//10-18-00
//11. Mapes Railroad Corp.
//This file will produce a bonus for employees who have been working at
//this company for a certain amount of years

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <apstring.h>

void main(void)
{
clrscr();   //For clearing the screen each time

apstring
 emp;
	     //Identifiers
int
 yrs;

float
 sal,
 percent,
 bonus;

//Assigning emp, yrs, and sal
cout<<"Enter the employee's initials: ";
cin>>emp;

cout<<"\nEnter the number of "<<emp<<"'s years of service at Mapes Railroad Corp: ";
cin>>yrs;

cout<<"\nWhat is "<<emp<<"'s annual salary? ";
cin>>sal;

//Switch for different percents of number of years
switch (yrs)
{
  case 0: case 1: case 2: case 3: case 4:
    percent=0;
    break;
  case 5: case 6: case 7: case 8: case 9:
    percent=.0575;
    break;
}

//If statement for numbers greater than 10
if (yrs>=10)
{
  percent=.12;
}

//Formula for bonus
bonus=sal*percent;

//Final output form
cout<<"\n\tMAPES RAILROAD CORP.";
cout<<"\n\nEmployee: "<<emp;
cout<<"\nYears of service: "<<yrs;
printf("\nBonus earned: $%6.2f",bonus);

}
