//Emilie Eggleston
//10-12-00
//Integer Arrays #1

#include <iostream.h>
#include <conio.h>

void main(void)
{
clrscr();

int
 x=0,              //Identifiers
 count=0;

//setting array name and int value
int num[20];

//for loop to input 20 numbers
for(x=0; x<20; x++)
{
  cout<<"Enter a number ";
  cin>>num[x];
}

//loop and if statement to find numbers less than 20
cout<<"\nThe numbers less than 20 are: ";
for(x=0; x<20; x++)
{
 if(num[x]<20)
 {
  cout<<num[x]<<" ";
  count++;              //counting the numbers in if statement
 }
}

//if and else statements for final output including count
if(count>0)
{
 cout<<"\nThere is a total of "<<count<<" numbers that are less than 20.";
}

else
{
 cout<<"\nThere are no numbers less than 20.";
}

}