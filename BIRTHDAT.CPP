//Emilie Eggleston
//10-25-00
//16. Birthdate
//This program will take your birthday and tell you what day of the week you
//were born on

#include <iostream.h>
#include <conio.h>
#include <apstring.h>
#include <dos.h>

void main(void)
{
clrscr();

int
 day,
 year,     //My identifiers
 month,
 total;

apstring
 weekday;

char
 yn;

do
{
clrscr();

//assigning birthdate
cout<<"What year were you born in (use last 2 digits)? ";
cin>>year;

cout<<"What month were you born in (use numbers)? ";
cin>>month;

cout<<"What day were you born on (number of course)? ";
cin>>day;

//Formulas that will eventually find day of week
total= year/4;
total= total+year;
total=total+day;

//Switch statement to add month number
switch (month)
{
case 1: case 10: total=total+1;
	break;
case 2: case 3: case 11: total=total+4;
	break;
case 4: case 7: total=total+0;
	break;
case 5: total=total+2;
	break;
case 6: total=total+5;
	break;
case 8: total=total+3;
	break;
case 9: case 12: total=total+6;
	break;
}
//If statement for leap years
if(year%4==0 && (month==1 || month==2))
{
total=total-1;
}

//Another formula
total=total%7;

//Another switch for the final step of finding weekday
switch (total)
{
case 1: weekday="Sunday";
	break;
case 2: weekday="Monday";
	break;
case 3: weekday="Tuesday";
	break;
case 4: weekday="Wednesday";
	break;
case 5: weekday="Thursday";
	break;
case 6: weekday="Friday";
	break;
case 0: weekday="Saturday";
}

//Final Output
cout<<"\nYou were born on a "<<weekday<<".\n\n";
delay(2000);
cout<<"Would you like to run the program again? (y/n) ";
cin>>yn;

}
while(yn=='y'||yn=='Y');

}