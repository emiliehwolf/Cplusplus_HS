//Emilie Eggleston
//8-25-00
//averages
#include <iostream.h>
#include <conio.h>
main ()
{
clrscr ();
int
 g1,
 g2,
 g3,
 g4,
 g5,
 sum=0,
 avg=0;
cout<<"Enter the 5 grades ";
cin>>g1>>g2>>g3>>g4>>g5;
 sum=g1+g2+g3+g4+g5;
 avg=sum/5;
cout<<"\nThe average is "<<avg;
return 0;
}