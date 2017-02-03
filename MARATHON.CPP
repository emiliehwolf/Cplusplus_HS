//Emilie Eggleston
//4-09-01
//Structures #1
//Marathon

#include <conio.h>
#include <iostream.h>
#include <apstring.h>
#include <fstream.h>
#include <iomanip.h>

void main(void)
{
clrscr();

int
 temp=0,
 temps=0,    //identifiers
 j=0,
 i=0,
 x=0;

//structure for text file
struct mar
{
 apstring
  name,
  sex;
 int
  age,
  min,
  sec;
};

//inputting text file into array
mar marathon [30];
ifstream input("A:RUNNERS.TXT",ios::in);

while (!input.eof())
{
input>>marathon[x].name;
input>>marathon[x].sex;
input>>marathon[x].age;
input>>marathon[x].min;
input>>marathon[x].sec;
x++;
}
x--;

//output for runners under 21
cout<<"-------Under 21-------"<<endl;
cout<<setw(8)<<"Name"<<setw(5)<<"Sex"<<setw(6)<<"Age"<<setw(6)<<"Min"<<setw(6)<<"Sec"<<endl;

//setting temp and temps to a large number
temp=100;
temps=59;

//for loop to find runners under 21
for(j=0; j<=x; j++)
{
 if(marathon[j].age<21)
 {
  //if statements to see if the runner's time is better than 50:59
  if(marathon[j].min<temp)
  {
   temp=marathon[j].min;
   temps=marathon[j].sec;
   i=j;
  }

  if(marathon[j].min==temp)
  {
   if(marathon[j].sec<=temps)
   {
    //assigning new temps
    temp=marathon[j].min;
    temps=marathon[j].sec;
    //assigning i for later use
    i=j;
   }
  }
 }
}

//now 'i' is used to output the fastest runner in the structure
cout<<setw(8)<<marathon[i].name<<setw(5)<<marathon[i].sex<<setw(6)<<marathon[i].age;
cout<<setw(6)<<marathon[i].min<<setw(6)<<marathon[i].sec;

cout<<endl<<endl<<endl<<"------- 21-28 -------"<<endl;
cout<<setw(8)<<"Name"<<setw(5)<<"Sex"<<setw(6)<<"Age"<<setw(6)<<"Min"<<setw(6)<<"Sec"<<endl;

//reassigning temp and temps
temp=100;
temps=59;

//another loop for runners from 21-28
for(j=0; j<=x; j++)
{
 if(marathon[j].age>=21 && marathon[j].age<29)
 {
  if(marathon[j].min<temp)
  {
   temp=marathon[j].min;
   temps=marathon[j].sec;
   i=j;
  }

  if(marathon[j].min==temp)
  {
   if(marathon[j].sec<=temps)
   {
    //assigning new temps
    temp=marathon[j].min;
    temps=marathon[j].sec;
    //assigning i for later use
    i=j;
   }
  }
 }
}

//outputting fastest runner in this category
cout<<setw(8)<<marathon[i].name<<setw(5)<<marathon[i].sex<<setw(6)<<marathon[i].age;
cout<<setw(6)<<marathon[i].min<<setw(6)<<marathon[i].sec;

cout<<endl<<endl<<endl<<"------- 29-38 -------"<<endl;
cout<<setw(8)<<"Name"<<setw(5)<<"Sex"<<setw(6)<<"Age"<<setw(6)<<"Min"<<setw(6)<<"Sec"<<endl;

//reassigning temp and temps
temp=100;
temps=59;

//another for loop... you know
for(j=0; j<=x; j++)
{
 if(marathon[j].age>=29 && marathon[j].age<39)
 {
  if(marathon[j].min<temp)
  {
   temp=marathon[j].min;
   temps=marathon[j].sec;
   i=j;
  }

  if(marathon[j].min==temp)
  {
   if(marathon[j].sec<=temps)
   {
    //assigning new temps
    temp=marathon[j].min;
    temps=marathon[j].sec;
    //assigning i for later use
    i=j;
   }
  }
 }
}
//more output
cout<<setw(8)<<marathon[i].name<<setw(5)<<marathon[i].sex<<setw(6)<<marathon[i].age;
cout<<setw(6)<<marathon[i].min<<setw(6)<<marathon[i].sec;

//and some more output
cout<<endl<<endl<<endl<<"------- 39-50 -------"<<endl;
cout<<setw(8)<<"Name"<<setw(5)<<"Sex"<<setw(6)<<"Age"<<setw(6)<<"Min"<<setw(6)<<"Sec"<<endl;

//reassigning for next group
temp=100;
temps=59;

//for loop and if statements for runners from 39-50
for(j=0; j<=x; j++)
{
 if(marathon[j].age>=39 && marathon[j].age<=50)
 {
  if(marathon[j].min<temp)
  {
   temp=marathon[j].min;
   temps=marathon[j].sec;
   i=j;
  }

  if(marathon[j].min==temp)
  {
   if(marathon[j].sec<=temps)
   {
    //assigning new temps
    temp=marathon[j].min;
    temps=marathon[j].sec;
    //assigning i for later use
    i=j;
   }
  }
 }
}

//more output
cout<<setw(8)<<marathon[i].name<<setw(5)<<marathon[i].sex<<setw(6)<<marathon[i].age;
cout<<setw(6)<<marathon[i].min<<setw(6)<<marathon[i].sec;

cout<<endl<<endl<<endl<<"------- Over 50 -------"<<endl;
cout<<setw(8)<<"Name"<<setw(5)<<"Sex"<<setw(6)<<"Age"<<setw(6)<<"Min"<<setw(6)<<"Sec"<<endl;

temp=100;
temps=59;

//the final loop and if statements
for(j=0; j<=x; j++)
{
 if(marathon[j].age>50)
 {
  if(marathon[j].min<temp)
  {
   temp=marathon[j].min;
   temps=marathon[j].sec;
   i=j;
  }

  if(marathon[j].min==temp)
  {
   if(marathon[j].sec<=temps)
   {
    //assigning new temps
    temp=marathon[j].min;
    temps=marathon[j].sec;
    //assigning i for later use
    i=j;
   }
  }
 }
}

//final output
cout<<marathon[i].name<<"   "<<marathon[i].sex<<"      "<<marathon[i].age;
cout<<"     "<<marathon[i].min<<"     "<<marathon[i].sec;
}