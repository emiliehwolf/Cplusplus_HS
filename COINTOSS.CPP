//Emilie Eggleston
//Aug 29, 2001
//Coin Toss

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <dos.h>

//a function
void a (int &sec, int &low, int &high);

void main(void)
{
//clear screen
clrscr();

int
 LOW=1,  //1 is tails and 2 is heads
 HIGH=2,
 seconds=0,
 l=1000,
 h=5000,
 x=0,
 hcount=0,
 tcount=0,    //identifiers
 coin,
 y=0;
char
 yn;

do
{
 clrscr();

 //inputting the number of times to flip the coin (duh)
 cout<<"How many times do you want to flip the coin? (no more than 100) ";
 cin>>y;

//the loop that runs the random number generator y times
while(x<y)
{
 //calling function
 a (seconds, l, h);

 //delaying the toss for more "random" results
 delay(seconds);

time_t seconds;
time(&seconds);
srand((unsigned int) seconds);
coin=rand()%(HIGH-LOW+1)+LOW;

//if and else statements to output T for tails and H for heads
if(coin==1)
 {
  cout<<"T ";
  //adding up the tails
  tcount++;
 }

else
 {
  cout<<"H ";
  //adding up the heads
  hcount++;
 }

//adding 1 to x to run the loop again
x++;
}

//output for results
cout<<endl<<endl<<"The results are:"<<endl;
cout<<hcount<<" Heads    "<<tcount<<" Tails";

//asking to input yn to repeat program
cout<<endl<<endl<<"Repeat program??? (y/n) ";
cin>>yn;

//reassigning values
hcount=0;
tcount=0;
x=0;

}
while(yn=='Y' || yn=='y');

//the end of main program
}

//function to find a random number for length of delay
void a (int &sec, int &low, int &high)
{
 time_t seconds;

 time(&seconds);
 srand((unsigned int) seconds);
 sec=rand()%(high-low+1)+low;
}