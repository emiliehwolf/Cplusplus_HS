//Emilie Eggleston
//Mr. Potato Head
//This program will determine which child is it
//10-30-01 -- 11-13-01

#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <apstring.h>

void main(void)
{
clrscr();

int
 x=0,
 jj=0,        //identifiers
 size=0,
 count=0,
 temp=0;

//two arrays;  'kids[]' is a text file with their names
apstring kids[20];
int zero[20];

char
 yn;

do
{
 //clearing screen and reassigning variables
 clrscr();
 count=0;
 temp=0;
 jj=0;

//do-while and ifstream to input kids text
do
{
cout<<"How many kids are there? ";
cin>>size;
}
while(size<2||size>20);

ifstream input("A:kids.txt",ios::in);

//for loop to assign each child to the number 1
for(x=0;x<size;x++)
{
 input>>kids[x];
 zero[x]=1;
}

//while loop to keep running until only one child is left with the # 1
while(jj<(size-1))
{

 //while loop to go through the array of kids
 while(temp<size)
 {

  //if the child isn't out yet, the counter adds one
  if(zero[temp]==1)
   count++;

  //if the child is the 15th one, it is changed to 0 and he/she is out
  if(count==15)
   {
    zero[temp]=0;
    count=0;
    //jj counts each child that is out to end the BIG while loop
    jj++;
   }

  //adding one to temp to go through the array of kids
  temp++;
 }

 /*once the program has gone through the line of kids, temp is changed
   back to zero so that it can go through the kids again*/
 temp=0;
}

//for loop to output the child that is it
for(x=0;x<size;x++)
{
 if(zero[x]==1)
  cout<<kids[x]<<" is it. (Kid #"<<x+1<<")\n";
}

//asking to play again
cout<<endl<<"Play Again? (y/n) ";
cin>>yn;
}
while(yn=='Y' || yn=='y');

//the end
}
