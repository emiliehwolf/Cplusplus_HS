//Emilie Eggleston
//8-30-00
//Area and Perimeter of rectangle
#include <iostream.h>
#include <conio.h>
main ()
{
clrscr ();
int
 lng,
 wid,
 area=0,
 prm=0;
cout<<"Enter the length and width: ";
cin>>lng>>wid;
 prm=2*(lng+wid);
 area=lng*wid;
cout<<"The area is "<<area;
cout<<"\nThe perimeter is "<<prm;
return 0;
}