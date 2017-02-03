//Emilie Eggleston
//December 7, 2001
//Sorting Program Test

#include <iostream.h>
#include <conio.h>
#include <fstream.h>


void sort (int STACKS[], int X);

void main(void)
{
clrscr();

int
 x=0,
 y=0;

int stacks[150];

//inputting
ifstream input("A:pancakes.txt",ios::in);
while(!input.eof())
{
 input>>stacks[x];
 x++;
}

//calling function
sort(stacks,x);

//outputting
for(y=(x-1);y>=0;y--)
 {
  if(stacks[y]==0)
   cout<<endl<<endl;
  else
   cout<<stacks[y]<<" ";
 }
//the end of main program
}

void sort (int STACKS[], int X)
{
int j, k;
 int key;

 for(j=1;j<X;j++)
 {

   key=STACKS[j];

   for(k=j-1;(k>=0)&&(STACKS[k]<key)&&STACKS[k]!=0;k--)
   {
    STACKS[k+1]=STACKS[k];
   }

   STACKS[k+1]=key;

 }
}