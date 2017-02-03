//Emilie Eggleston
//11-13-00
//Page 367  #30
//This program will print a table of Mr. Thomas's salary schedule

#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main (void)
{
clrscr ();


float
 day,             //Identifiers
 sal=0.01,
 total=0.01;

 //Cout before loop for Table
cout<<"Day Number\tDaily Salary\tTotal Earned\n";

//Loop for days from 1 to 30
for(day=1; day<=30; day++)
{
//Output for table
printf("%5.0f\t\t$%10.2f\t\t$%10.2f\n",day,sal,total);

//Formulas for accumulated salary and total
sal=sal*2;
total=total+sal;
}
} //The end