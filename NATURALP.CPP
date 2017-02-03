//Emilie Eggleston
//12-5-00
//Pg 194: #7  One-week pay report for 3 employees
//Natural Pine Furniture Company

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <apstring.h>

void main(void)
{
clrscr();

char
 yn;

float
 hours=0,
 rate=0,          //all my identifiers
 totwages=0,
 fed=0,
 state=0,
 hos=26.65,
 un=7.85,
 totded=0,
 netpay=0,
 gross=0,
 grfed=0,
 grstate=0,
 grhos=hos*3,
 grun=un*3,
 grded=0,
 grnet=0;

apstring
 emp;

//Do-while loop to ask whether the program should be ran again
do
{

//Assigning employee, hours, and rate
cout<<"Enter employee's initials: ";
cin>>emp;

cout<<"Enter how many hours he/she worked: ";
cin>>hours;

cout<<"What is the hourly rate? ";
cin>>rate;

//Formulas
totwages=hours*rate;
fed=.18*totwages;
state=.045*totwages;
totded=fed+state+hos+un;
netpay=totwages-totded;
gross=gross+totwages;
grfed=grfed+fed;
grstate=grstate+state;
grded=grded+totded;
grnet=grnet+netpay;

//Output of employee form
cout<<"\nEmployee:\t\t\t\t"<<emp;
printf("\nHours Worked:\t\t\t\t%8.2f",hours);
printf("\nHourly Rate:\t\t\t\t%8.2f",rate);
printf("\nTotal Wages:\t\t\t\t%8.2f",totwages);

cout<<"\n\nDeductions:\n";
printf("\nFederal Withholding\t\t\t%8.2f",fed);
printf("\nState Withholding\t\t\t%8.2f",state);
printf("\nHospitalization\t\t\t\t%8.2f",hos);
printf("\nUnion Dues\t\t\t\t%8.2f",un);
cout<<"\n\t\t\t\t\t   _____\n";
printf("Total Deductions\t\t\t%8.2f",totded);
printf("\n\nNet Pay\t\t\t\t\t$%8.2f\n\n",netpay);

//Entering y or n for repeating loop
cout<<"Do you want to enter another employee? Y/N ";
cin>>yn;
}
while(yn=='y' || yn=='Y');

//output for Weekly Summary and gross wages
cout<<"\n\t\tNatural Pine Furniture Company\n\t\t\tWeekly Summary\n\n";
printf("Gross wages:\t\t\t\t%8.2f",gross);

cout<<"\n\nDeductions:\n";
printf("\tFederal Withholding\t\t%8.2f",grfed);
printf("\n\tState Withholding\t\t%8.2f",grstate);
printf("\n\tHospitalization\t\t\t%8.2f",grhos);
printf("\n\tUnion Dues\t\t\t%8.2f",grun);
printf("\n\tTotal Deductions\t\t%8.2f",grded);

printf("\n\n\tNet Wages\t\t\t$%8.2f",grnet);

//the end
}