//Emilie Eggleston
//March 21-28 of 201
//IRS Income Tax

#include <iostream.h>
#include <conio.h>
#include <apstring.h>
#include <stdio.h>
#include <fstream.h>
#include <iomanip.h>

void main(void)
{
clrscr();

long int
 x=0,
 arraycount=0,
 ded=0,          //identifiers
 j=0;

apstring
 temp;

long float
 inc;

//structure to input into array
struct names
{
 apstring last,
	  first;
 long float num;
};

//assigning array
names income[50];
ifstream input ("A:income.txt", ios::in);

while (!input.eof())
{
 input>>income[j].last;
 input>>income[j].first;
 input>>income[j].num;
j++;
}

//structure to create new array for new data
struct families
{
 apstring
  fam;

 long float
  totalinc,
  adjusted,
  rate,
  tax;

 int
  deductions;
};

//assigning array
families output [50];

//assigning temporary name before loop starts
temp=income[0].last;

for(x=0;x<j;x++)
{

 //if statement for same family names
 if(income[x].last==temp)
 {
  inc=inc+income[x].num;
  ded++;
 }

 //else statement for last names that are different
 else
 {
  output[arraycount].totalinc=inc;
  output[arraycount].fam=temp;
  output[arraycount].deductions=ded;

  output[arraycount].adjusted=output[arraycount].totalinc-(5000*output[arraycount].deductions);

  //if statement to find tax rates for incomes less than 60000
  if(output[arraycount].totalinc<60000)
   output[arraycount].rate=output[arraycount].adjusted/100000;

  //else statement to change tax rate to .5
  else
   output[arraycount].rate=.5;

  //formula for tax
  output[arraycount].tax=output[arraycount].rate*output[arraycount].adjusted;

  /*formulas to re-assign inc, temp, arraycount, and ded for the next
  time through the loop*/
  inc=income[x].num;
  temp=income[x].last;
  arraycount++;
  ded=1;
 }
}

//output for table
cout<<endl<<setw(12)<<"Family Name"<<setw(15)<<"  Total Income"<<setw(16)<<"Tax\n";

//loop to output the data
for(x=0;x<arraycount;x++)
{
 //if statement to check for negative taxes
 if(output[x].tax<0)
  output[x].tax=0;

 cout<<endl<<setw(12)<<output[x].fam<<"   ";
 printf("$%11.2f",output[x].totalinc);
 printf("   $%11.2f",output[x].tax);

}
//the end
}