//Emilie Eggleston
//10-30-00
//Pg 284  #15
//State University

#include <iostream.h>
#include <conio.h>
#include <apstring.h>
#include <stdio.h>

void main(void)
{
clrscr();

float
roomcharge=0,
dipfee=0,
foodcharge=0,
hours=0,           //Identifiers
total=0;

apstring
room,
gradstat;

int
sem=0,
stnum=0;

//Assigning room, hours, semester, student number, and graduating status
cout<<"What room are you staying in? (Pick a letter)\n";
cout<<"R = Regular\nA = Air conditioned room\n";
cin>>room;

cout<<"Enter number of credit hours ";
cin>>hours;

cout<<"How many semesters have you been there? ";
cin>>sem;

cout<<"What is your student number? ";
cin>>stnum;

cout<<"Are you graduating? (Y/N) ";
cin>>gradstat;

//if statement for regular room
if (room=="R" || room=="r")
{
 room="Regular";
 roomcharge=200;
}

//if statement for air conditioned room
if (room=="A" || room=="a")
{
 room="AC";
 roomcharge=250;
}

//If statement for graduating students to assign diploma fee
if (gradstat=="Y" || gradstat=="y")
{
 dipfee=35;
 gradstat="Yes";
}

else
{
 gradstat="No";
}

//Formulas
foodcharge=400*sem;
roomcharge=roomcharge*sem;

total = hours*90 + roomcharge + dipfee + foodcharge + 30;

//Final Output
cout<<"\n\nStudent Number:\t\t\t\t"<<stnum;
cout<<"\nNumber of Completed Semesters:\t\t"<<sem;
cout<<"\nType of Room:\t\t\t\t"<<room;
cout<<"\nNumber of Semester Hours of Credit:\t"<<hours;
cout<<"\nGraduating:\t\t\t\t"<<gradstat;

//Another formula
hours=hours*90;

//More output
printf("\n\nSemester Credit Hours Charge:\t\t$%6.2f",hours);
printf("\nRoom Charge:\t\t\t\t$%6.2f",roomcharge);
cout<<"\nMatriculation Fee:\t\t\t$30.00";
printf("\nEating charge:\t\t\t\t$%6.2f",foodcharge);
printf("\nDiploma fee:\t\t\t\t$%6.2f",dipfee);
printf("\n\nTotal:\t\t\t\t\t$%6.2f",total);

//Changing hours back
hours=hours/90;

//if statements for students taking too much or too little hours
if(hours<12)
{
cout<<"\nWARNING!!   You are taking less than 12 credit hours!";
}
if(hours>21)
{
cout<<"\nWARNING!!   You are taking more than 21 credit hours!";
}

//The End
}
