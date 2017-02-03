//Emilie Egghead
//10 - 15 - 01
//Sorting a data file

#include <iostream.h>
#include <conio.h>
#include <time.h>
#include <dos.h>
#include <stdlib.h>

//functions
void sort_up (int DATA[10]);
void sort_down (int DATA[10]);
void rng (int DATA[10]);

void main(void)
{
clrscr();

int
 data [10],
 x=0;        //identifiers
char
 yn;

do
{
clrscr();

//calling random number generator function
rng(data);

//outputting the 10 numbers
for(x=0;x<10;x++)
  cout<<data[x]<<" ";

cout<<endl<<"Would you like the array to (1)ascend or (2)descend? ";
cin>>yn;

//calling ascending function
if(yn=='1')
 sort_up(data);

//calling descending function
if(yn=='2')
 sort_down(data);

//outputting the newly sorted array
cout<<endl<<endl;
for(x=0;x<10;x++)
 cout<<data[x]<<" ";

//asking to repeat program
cout<<endl<<"Repeat program? (y/n)";
cin>>yn;
}
while(yn=='Y' || yn=='y');

}

//descending
void sort_down (int DATA[10])
{
 int
  j,
  k,
  small,
  temp;

 for(j=9; j>0; j--)
 {
  small=0;

  for(k=1; k<=j; k++)
  {
   if(DATA[k]<DATA[small])
     small=k;
  }
 temp=DATA[small];
 DATA[small]=DATA[j];
 DATA[j]=temp;
 }
}

//ascending
void sort_up (int DATA[10])
{
 int
  j,
  k,
  small,
  temp;

 for(j=9; j>0; j--)
 {
  small=0;

  for(k=1; k<=j; k++)
  {
   if(DATA[k]>DATA[small])
     small=k;
  }
 temp=DATA[small];
 DATA[small]=DATA[j];
 DATA[j]=temp;
 }
}

//random number generator
void rng (int DATA[10])
{
 int
  LOW=0,
  HIGH=99,
  b=0,
  X;

 for(b=0;b<10;b++)
 {
  delay(1500);
  time_t seconds;

  time(&seconds);
  srand((unsigned int) seconds);
  X=rand()%(HIGH-LOW+1)+LOW;

  DATA[b]=X;
 }
}