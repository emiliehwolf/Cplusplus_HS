//Emilie Eggleston
//9-6-00
//7. Minutes and Hours
/*This program will change minutes into hour-minutes format*/
#include <iostream.h>
#include <conio.h>

int main ()
{

clrscr ();
int
 min=0,
 hr=0;

cout<<"Enter the number of minutes ";
cin>>min;

cout<<"\nYou entered "<<min<<" minute(s).";   //confirmation

hr=min/60;    //this will get the interger for the hour
min=min%60;   //and this will get the remainder minutes

//This is the final output
cout<<"\nThe hour-minutes format is "<<hr<<" hour(s) and "<<min<<" minute(s).";

return 0;
}