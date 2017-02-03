//Emilie Eggleston
//11-30-00
//Calander Pg 366 #18
//This program will ask for info about a month and then output a calander

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <apstring.h>

void main(void)
{
clrscr();

char
 rep,
 leap;

apstring
 name;

int
 month,
 day,       //my identifiers
 j=1,
 y,
 x;

//Do while loop for repeating the calander
do
{

   //Assigning month and day the calander starts
   cout<<"Enter what month you want as a calander\n";
   cout<<"1 = January\t2 = February\n3 = March\t4 = April\n";
   cout<<"5 = May\t\t6 = June\n7 = July\t8 = August\n9 = September\t";
   cout<<"10 = October\n11 = November\t12 = December\n";
   cin>>month;

   if(month>12 || month<1)
   {
	cout<<"WARNING!!!  Month must be a number from 1 to 12.";
	cout<<"\nEnter another number:  ";
	cin>>month;
   }

   cout<<"What day does it start on?\n1 = Sunday\t";
   cout<<"2 = Monday\n3 = Tuesday\t4 = Wednesday\n5 = Thursday\t";
   cout<<"6 = Friday\n7 = Saturday\n";
   cin>>day;

   if(day<1 || day>7)
   {
	cout<<"WARNING!!!  Day must be a number from 1 to 7.";
	cout<<"\nEnter another number:  ";
	cin>>day;
   }

   //switch statement to assign number of days in month and name of month
   switch(month)
   {
	case 1: x=31;
		name="January";
		break;
	case 3: x=31;
		name="March";
		break;
	case 5: x=31;
		name="May";
		break;
	case 8: x=31;
		name="August";
		break;
	case 7: x=31;
		name="July";
		break;
	case 10: x=31;
		name="October";
		break;
	case 12: x=31;
		name="December";
		break;
	case 2: x=28;
		name="February";
		break;
	case 4: x=30;
		name="April";
		break;
	case 6: x=30;
		name="June";
		break;
	case 9: x=30;
		name="September";
		break;
	case 11: x=30;
		name="November";
		break;
   }

   //if statement for leap years if it's February
   if (month==2)
   {
	cout<<"Is it a leap year? Y/N ";
	cin>>leap;

	if(leap=='Y' || leap=='y')
	{
	x=29;
	}
   }

   //Output for month
   cout<<endl<<setw(24)<<name<<endl<<endl;

   //Output for calander headings
   cout<<setw(6)<<"Sun"<<setw(6)<<"Mon"<<setw(6)<<"Tues"<<setw(6)
   <<"Wed"<<setw(6)<<"Thurs"<<setw(6)<<"Fri"<<setw(6)<<"Sat";
   cout<<endl;

   //switch statement for setwidth of first calander line
   switch(day)
   {
	case 1: y=6;
		break;
	case 2: y=12;
		break;
	case 3: y=18;
		break;
	case 4: y=24;
		break;
	case 5: y=30;
		break;
	case 6: y=36;
		break;
	case 7: y=42;
		break;
   }

   //setwidth for first line
   cout<<setw(y);

   //For loop for the numbers of the month
   for(j=1; j<=x; j++)
   {
	cout<<j<<setw(6);

	//if statement for going to next line after Saturday
	if((day+j-1)%7==0)
	{
	cout<<endl;
	}
   }

//cout for repeating calander
cout<<"\n\nWould you like to make another calader? Y/N ";
cin>>rep;

}
while (rep=='Y' || rep=='y');

//the end
}