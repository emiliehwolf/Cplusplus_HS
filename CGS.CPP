//Emilie Eggleston
//10-9-00
//Computerized Grading System
/*This program will average 4 out of 5 tests and tell you your letter grade*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main(void)
{
clrscr();

int
 g1,
 g2,
 g3,
 g4,
 g5,            //My identifiers
 small;

float
 avg;

char
 let;

//Assigning grades
cout<<"Enter the 5 grades: ";
cin>>g1>>g2>>g3>>g4>>g5;

//If statements to find smallest grade
if(g1<g2 && g1<g3 && g1<g4 && g1<g5)
{
small=g1;
}

if(g2<g1 && g2<g3 && g2<g4 && g2<g5)
{
small=g2;
}

if(g3<g1 && g3<g2 && g3<g4 && g3<g5)
{
small=g3;
}

if(g4<g1 && g4<g2 && g4<g3 && g4<g5)
{
small=g4;
}

if(g5<g1 && g5<g2 && g5<g3 && g5<g4)
{
small=g5;
}

//Formula for average of 4 highest grades
avg=(g1+g2+g3+g4+g5-small)/4;

//If statements for finding letter averages
if(avg>=90)
{
let='A';
}

if(avg>=80 && avg<=89)
{
let='B';
}

if(avg<=79 && avg>=70)
{
let='C';
}

if(avg<70)
{
let='F';
}

//Final output for averages
printf("Your grade average is %3.2f\n",avg);
cout<<"Your letter average is "<<let;

}