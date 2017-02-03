//Emilie Eggleston
//Aug. 15, 2001
//Beginning Program #2
//Binary code

#include <iostream.h>
#include <conio.h>

void main(void)
{
clrscr();

char
 yn;

long long int
 code;

do
{
 do
 {
  cout<<"Enter a binary integer: ";
  cin>>code;
 }
 while(code>11111111);

 cout<<"Do you want to enter another digit? (y/n) ";
 cin>>yn;
}
while(yn=='y' || yn=='Y');
}
