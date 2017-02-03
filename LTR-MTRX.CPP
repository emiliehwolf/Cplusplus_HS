//Emilie Eggleston
//Started: January 23, 2001
//TCEA State Programming Contest: Order It
//This program will indicate the order of integers in a matrix with letters

#include <conio.h>
#include <iostream.h>
#include <fstream.h>
#include <math.h>

void main(void)
{

char
yn;

do
{
clrscr();

int
 size=-1,
 y=0,
 z=0,
 w=0,
 k=0,         //identifiers
 count=0,
 temp=0,
 num=0,
 numbers[79];

char
 letterorder=65,
 letters [5][5];

//inputting the first number of the data file as the number of matrices
ifstream input("A:pr94.dat",ios::in);
input>>num;

//running through the array the number of times assigned by 'num'
for(k=0;k<num;k++)
{
 //re-assigning some of the variables
 letterorder=65;
 count=0;
 temp=0;
 size=-1;

 //inputting the matrices separately
 do
 {
  size++;
  input>>numbers[size];  //size is the length of the array
 }
 while(numbers[size]>=0);

 //changing the numbers to letters in each matrix
 for(temp=0;temp<50;temp++) //this loop runs through 50 numbers
 {
  //this loop runs through each matrix searching for the temp number
  for(y=0;y<size;y++)
  {
      if(numbers[y]==temp)
      {
       numbers[y]=letterorder;
       count++;
      }
  }

  //if any numbers were changed to letters, the letterorder goes up
   if(count>0)
   {
    count=0;
    letterorder++;
   }
 }

 //finding the dimensions for the matrix and re-assigning y
 size=sqrt(size);
 y=0;

 //putting the numbers array into the 2D array and then outputting it
 for(z=0;z<size;z++)
 {
  for(w=0;w<size;w++)
  {
   letters[z][w]=numbers[y];
   cout<<letters[z][w]<<" ";
   y++;
  }
 cout<<endl;
 }

cout<<endl;
}

//asking to run again
cout<<"\nRun Again??? (y/n) ";
cin>>yn;

}
while(yn=='Y'||yn=='y');

//end of main program
}