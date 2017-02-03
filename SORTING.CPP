//Emilie Eggleston
//This program tests a sort
//Nov 26, 2001

#include <fstream.h>
#include <conio.h>
#include <iostream.h>


void insertion_sort (int array[], int array_length);

void main(void)
{
clrscr();

int
 x=0,
 LENGTH=20;

int sort[20];

ifstream input("A:sort.txt",ios::in);
for(x=0;x<20;x++)
 input>>sort[x];

insertion_sort(sort, LENGTH);

cout<<endl;
for(x=0;x<20;x++)
 cout<<sort[x]<<" ";
}

void insertion_sort (int array[], int array_length)
{
 int j, k, key;
 for(j=1;j<array_length;j++)
 {
  key=array[j];

  //change the sign here for ascending or descending
  for(k=j-1;(k>=0)&&(array[k]>key);k--)
			   //^here
   array[k+1]=array[k];

  array[k+1]=key;
 }
}