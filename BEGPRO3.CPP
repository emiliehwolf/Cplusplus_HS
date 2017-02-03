//Emilie Eggleston
//Aug 15, '01
//Beginning Program #3
//Asterik Square

#include <iostream.h>
#include <conio.h>
#include <apstring.h>


void main(void)
{
clrscr();

int
 side=0,
 k=0,
 j=0;
	 //identifiers
apstring
 dot="*";

//inputting length for side
cout<<"How long should the side be? ";
cin>>side;

//2 loops for outputting the asterik
for(j=0;j<side;j++)
{
 for(k=0;k<side;k++)
 {
  cout<<dot;
 }
 //ending the line for each row
 cout<<endl;
}

}