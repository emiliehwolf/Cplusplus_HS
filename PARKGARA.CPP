//Emilie Eggleston
//Aug 10, 2001
//Beginning Program #1
//Parking Garage

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main(void)
{
clrscr();

int
 j=0;

float        //identifiers
 hour[3],
 tot_hour=0,
 charge[3],
 tot_charge=0;

//for loop to input hours that cars were parked
for (j=0;j<3;j++)
{
 cout<<"Enter the hours that customer "<<(j+1)<<" parked: ";
 cin>>hour[j];

 //finding the charges
 if(hour[j]>=3)
  charge[j]=2+(hour[j]-3)*.5;

 else
  charge[j]=2;

 if(charge[j]>=10)
  charge[j]=10;

 //formulas for total hours and charges
 tot_hour=tot_hour+hour[j];
 tot_charge=tot_charge+charge[j];
}

//the output in a pretty format ;-)
cout<<"Car\t\tHours\t\tCharges\n";
printf("1\t\t%2.1f\t\t$%2.2f\n",hour[0],charge[0]);
printf("2\t\t%2.1f\t\t$%2.2f\n",hour[1],charge[1]);
printf("3\t\t%2.1f\t\t$%2.2f\n",hour[2],charge[2]);
printf("TOTAL\t\t%2.1f\t\t$%2.2f\n",tot_hour,tot_charge);

//the end
}