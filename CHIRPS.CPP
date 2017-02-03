//Emilie Eggleston
//8-30-00
//cricket thermometer
#include <iostream.h>
#include <conio.h>
int main ()
{
clrscr ();
int
 N=0,
 T=0;
cout<<"Enter the number of chirps per minute ";
cin>>N;
T=N/4+40;
cout<<"\nThe temperature is "<<T;
cout<<" degrees Fahrenhiet";
return 0;
}