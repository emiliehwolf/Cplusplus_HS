//Emilie Eggleston
//01-10-01
//Pg488 #6

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main(void)
{
clrscr();

int
 j=0;
		//identifiers
float
 sum=0,
 avg=0;

//setting the array name and int value
int number[10];

//for loop to input 10 numbers
for(j=0;j<10;j++)
{
  cout<<"\nEnter a number ";
  cin>>number[j];
  //formula to find sum
  sum=sum+number[j];
}

//formula for average
avg=sum/10;

//ouputting average
printf("\nThe average of the 10 numbers is %4.4f",avg);

//ouputting numbers greater than average
cout<<"\nThese numbers are greater than the average: ";

for(j=0;j<10;j++)
{
//if statement to find them
if(number[j]>avg)
{
  cout<<number[j]<<" ";
}
}
//the end
}