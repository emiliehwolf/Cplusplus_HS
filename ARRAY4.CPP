//Emilie Eggleston
//01-16-01
//Integer Arrays #4

#include <iostream.h>
#include <conio.h>
#include <fstream.h>

void main(void)
{
clrscr();

int
 x,
 prod[15],    //identifiers
 a[15],
 b[15];

ifstream input ("A:number.txt",ios::in);

//for loop to input 30 integers for a and b
for(x=0; x<10; x++)
{
  cout<<"Enter a number ";
  input>>a[x];

  cout<<"Enter a number ";
  input>>b[x];
}

//ouput before loop for table heading
cout<<"\nA\tB\tPROD\n\n";

//for loop to find product for each one and output it in a table
for(x=0; x<10; x++)
{
  prod[x]=a[x]*b[x];

  cout<<a[x]<<"\t"<<b[x]<<"\t"<<prod[x]<<endl;
}
//the end
}
