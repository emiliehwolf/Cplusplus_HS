//Emilie Eggleston
//This program will test a bubble sort
//Jan 16, '01

#include <iostream.h>
#include <conio.h>
#include <apstring.h>
#include <fstream.h>

void bubble_sort_descending(apstring array[], int arraylength);
void bubble_sort_ascending(apstring array[], int arraylength);

void main(void)
{
clrscr();

int
 x=0,
 y=0;

apstring ARRAY[5];

ifstream input("A:names.txt",ios::in);
while(!input.eof())
{
 input>>ARRAY[x];
 x++;
}

cout<<"Original List--\n";
for(y=0; y<x; y++)
 cout<<ARRAY[y]<<" ";

cout<<endl<<endl<<"Descending Order--\n";

bubble_sort_descending(ARRAY, x);

for(y=0; y<x; y++)
 cout<<ARRAY[y]<<" ";

cout<<endl<<endl<<"Ascending Order--\n";

bubble_sort_ascending(ARRAY, x);

for(y=0; y<x; y++)
 cout<<ARRAY[y]<<" ";

//end of main program
}


void bubble_sort_descending(apstring array[], int arraylength)
{
 int i, j, flag=1;
 apstring temp;

 for(i=1; (i<=arraylength)&&flag; i++)
 {
  flag=0;
  for(j=0; j<(arraylength-i); j++)
  {
   if(array[j+1]>array[j])
   {          //^changes ascending and descending
    temp=array[j+1];
    array[j+1]=array[j];
    array[j]=temp;
    flag=1;
   }
  }
 }
}

void bubble_sort_ascending(apstring array[], int arraylength)
{
 int i, j, flag=1;
 apstring temp;

 for(i=1; (i<=arraylength)&&flag; i++)
 {
  flag=0;
  for(j=0; j<(arraylength-i); j++)
  {
   if(array[j+1]<array[j])
   {          //^changes ascending and descending
    temp=array[j+1];
    array[j+1]=array[j];
    array[j]=temp;
    flag=1;
   }
  }
 }
}