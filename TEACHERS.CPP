//Emilie Eggleston
//01-09-01
//Pg.368 #32
//This program will find a teacher's salary for up to 12 years

#include <iostream.h>
#include <conio.h>

void main(void)
{
clrscr();

long int
 num=21000,     //Identifiers
 l=0;

float
 p=.04;

//Output for titling before loop begins
cout<<"Years Experience\tSalary\n\n";

//Loop to run from year 0 to 12
for(l=0;l<=12;l=l+1)
{
  cout<<l<<"\t\t\t$"<<num<<endl;
  num=num+num*p;
}
//The End
}
