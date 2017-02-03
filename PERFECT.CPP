//Emilie Eggleston
//Aug 29, 2001  (Took 7 days to complete)
//Beginning Program #6
//This program will find perfect numbers

#include <iostream.h>
#include <conio.h>

void main(void)
{
clrscr();

int
 x=2,
 k=0,     //Identifiers
 sum=0,
 j=1,
 factor[1000];  //array

//output before loop to state the perfect numbers (duh)
cout<<"The perfect numbers between 1 and 1000 are:\n\n";

//for loop to check through numbers between 1 and 1000
for(x=2;x<=1000;x++)
{
 //reassigning sum and j
 sum=0;
 j=1;

 //for loop to reassign array
 for(k=0;k<1000;k++)
 {
   factor[k]=0;
 }

 //for loop to check for factors
 for(j=1;j<x;j++)
 {

   //if statement to find factors that work
   if(x%j==0)
   {
     //assigning factor array and reassigning sum
     factor[j-1]=j;
     sum=sum+factor[j-1];
   }
 }

 //for loop to run through the factors again
 for(k=2;k<1000;k++)
 {
  //if statement to spit out factors of the perfect number
  if(sum==x && factor[k-1]!=0)
   cout<<factor[k-1]<<" + ";
 }


 //if statement to spit out the perfect number
 if(sum==x)
  cout<<"1 = "<<sum<<endl;

}
//the end
}