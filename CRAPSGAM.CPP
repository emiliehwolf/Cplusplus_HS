//Emilie Eggleston
//Function #8  CRAPS GAME

#include <iostream.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//prototypes for functions
void rolling (int &first_die, int &second_die);
void betting (int &b, int &bal);
void win (int &bal, int &b);
void lose (int &bal, int &b);

void main (void)
{
clrscr();

char
 ans;
int        //identifiers
 point,
 balance,
 bet,
 first,
 second;

//Intructions for Craps
cout<<"\t\t\tTHE DICE GAME OF CRAPS\nInstructions:\n";
cout<<"If you roll snake eyes, box cars, or a 1 and 2, then you lose.\n";
cout<<"If you roll a 7 or 11, then you win.\n\n";
cout<<"Anything else you roll is your point.  You must then continue rolling until";
cout<<"\n\tyou roll a 7 (lose) or your point (win).\n\n";

//Assigning bank balance
cout<<"What is your bank balance? ";
cin>>balance;

//do-while loop for repeating game
do
{
 //calling functions
 betting (bet, balance);
 rolling (first, second);

 //formula for point
 point=first+second;

 //if statements to call functions for winning and losing
 if(point==7 || point==11)
  win (balance, bet);

 if(point==2 || point==12 || point==3)
  lose (balance, bet);

 //if statement for rolling a point
 if(point!=12 && point!=11 && point!=7 && point!=2 && point!=3)
 {
  cout<<"Your point is now "<<point<<endl;

  do
  {
   getch();
   rolling (first, second);
  }
  while(first+second!=point&&first+second!=7);

 if(first+second==point)
  win (balance, bet);

 if(first+second==7)
  lose (balance, bet);
}

cout<<"\nDo you want to play again? (y/n) ";
cin>>ans;

}
while (ans=='y' || ans=='Y');
}

void betting (int &b, int &bal)
{
cout<<"How much do you want to bet? ";
cin>>b;

if(b>bal)
{
 do
 {
  cout<<"You can not bet more than $"<<bal<<".  Enter a new bet: ";
  cin>>b;
 }
 while (b>bal);
}
}

void win (int &bal, int &b)
{
 bal=bal+b;
 cout<<"YOU WON!!!  Your bank balance is now $"<<bal<<endl;
}

void lose (int &bal, int &b)
{
 bal=bal-b;
 cout<<"HA HA!  You lost.  Your bank balance is now $"<<bal<<endl;
}

void rolling (int &first_die, int &second_die)
{
 const
  int LOW=1;

 const
  int HIGH=6;

 time_t seconds;

 time (&seconds);
 srand ((unsigned int) seconds);
 first_die=rand()%(HIGH-LOW+1)+LOW;
 second_die=rand()%(HIGH-LOW+1)+LOW;

 cout<<"\nYour roll was ("<<first_die<<", "<<second_die<<")"<<endl;
}