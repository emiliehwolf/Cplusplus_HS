/*Emilie Eggleston
Started: January 30, 2001
For a given string, output the unique characters in their original order
with no spaces*/

#include <iostream.h>
#include <conio.h>
#include <apstring.h>

void main(void)
{

char yn;

do
{
 clrscr();

 int
  num=0,
  temp=0,
  count=0,     //identifiers
  a=0,
  x=0;

 apstring
  line;

char
 out[500];

 cout<<"Enter a line to convert.\n";
 cin>>line;

 getline(cin,line);

 num=line.length();

while(x<num)
{
 if(line[x]!=' ')
  temp=line[x];

 count=0;

 for(a=0;a<num;a++)
 {
   if(line[a]==temp&&count<1)
   {
       out[x]=line[a];
       count++;
   }
 }
x++;
}

 for(x=0;x<num;x++)
 {
  cout<<out[x];
 }

 cout<<endl<<"Run Again??? (y/n) ";
 cin>>yn;
}while(yn=='y' || yn=='Y');

//end of main program
}