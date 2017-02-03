//Emilie Eggleston
//9-24-2001
//Penny Pitch (an annoying game)

#include <conio.h>
#include <iostream.h>
#include <fstream.h>
#include <time.h>
#include <stdlib.h>
#include <dos.h>

//function for Random Number Generator
void rng (int &x, int &y, int low, int high);

void main(void)
{
clrscr();

int
 p=0,
 sum=0,
 a=0,
 k=0,    //identifiers
 j=0,
 LOW=0,
 HIGH=4,
 X=0,
 Y=0;

char
 sym=155,
 yn;

//do-while to repeat program
do
{
clrscr();
//reassigning sum to 0 for each time you run the program
sum=0;

//structure
struct penny
{
 char
  element;
};

//2-D array
penny pitch [5] [5];
ifstream input ("A:table.txt",ios::in);

//inputting the data from the text file into the the 2-D array
while (!input.eof())
{
 for(k=0;k<5;k++)
 {
  for(j=0;j<5;j++)
  {
   input>>pitch[k][j].element;
  }
 }
}
cout<<endl;

//outputting the table
for(k=0;k<5;k++)
{
 for(j=0;j<5;j++)
 {
  cout<<"     "<<pitch[k][j].element;
 }
 cout<<endl<<endl;
}

//do-while loop to moron-proof it
do
{
 //entering number of pennies to throw
 cout<<endl<<"How many pennies do you have to throw? ";
 cin>>p;
}
while(p<1 || p>25);

//for loop to output the tosses onto board
for(a=0;a<p;a++)
{
 if(a!=0)
 {
  cout<<endl<<"You have "<<p-a<<" pennies left.";
 }

 cout<<endl<<"Press any key to toss.";
 getch();
 clrscr();

//calling function for random x and y coordinates
 rng (X, Y, LOW, HIGH);

  for(k=0;k<5;k++)
  {
   for(j=0;j<5;j++)
   {
    //when the random x and y coordinates match k and j, a symbol is output
    if(k==X && j==Y)
    {
     //adding sum for score
     sum=sum+pitch[k][j].element-48;
     cout<<"     "<<sym;
    }

    else
     cout<<"     "<<pitch[k][j].element;
   }
   cout<<endl<<endl;
  }

  //outputting your cumulative score
  cout<<endl<<"Your score is now "<<sum<<"."<<endl<<endl;
}

//assigning yn for repeating program
cout<<"Play Again??? (y/n) ";
cin>>yn;

}
while(yn=='Y' || yn=='y');

//the end of main program
}

//Random Number Generator
void rng (int &x, int &y, int low, int high)
{
 time_t seconds;

 time(&seconds);
 srand((unsigned int) seconds);
 x=rand()%(high-low+1)+low;
 y=rand()%(high-low+1)+low;
}