//Emilie Eggleston
//1-26-01
//Pg 487: #1

#include <conio.h>
#include <iostream.h>
#include <fstream.h>

void main(void)
{
clrscr();

int
 high=0,        //identifiers
 low=100,
 sum,
 a[15],
 avg,
 j;

ifstream input ("A:number.txt",ios::in);

//loop to input the text file
for(j=0; j<15; j++)
{
 input>>a[j];

 //formula for sum
 sum=sum+a[j];

 //if statement to find lowest score
 if(a[j]<low)
   low=a[j];

 //if statement to find highest score
 if(a[j]>high)
   high=a[j];
}

//formula for average
avg=sum/15;

//for loop to output the numbers
for(j=0; j<15; j++)
{
 cout<<a[j]<<endl;
}

//Final output for highest, lowest, and average score
cout<<"The highest score is "<<high;
cout<<"\nThe lowest score is "<<low;
cout<<"\nThe average score is "<<avg;

}