//Emilie Eggleston
//Function #8  CRAPS GAME
//February 22, 2001

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
 //calling functions for betting and rolling
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

  //do-while loop to keep rolling
  do
  {
   cout<<"Roll again. (Type k and press enter) ";
   cin>>ans;

   if(ans=='k' || ans=='K')
   {
    rolling (first, second);
   }
  }
  while(first+second!=point&&first+second!=7);

 //if statements for winning and losing
 if(first+second==point)
  win (balance, bet);

 if(first+second==7)
  lose (balance, bet);
}

//assigning ans for playing Craps again
cout<<"\nDo you want to play again? (y/n) ";
cin>>ans;

}
while (ans=='y' || ans=='Y');

//end of main program
}

//function for betting
void betting (int &b, int &bal)
{
cout<<"How much do you want to bet? ";
cin>>b;

//if statement and do-while for bets that exceed bank balance
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

//function for winning
void win (int &bal, int &b)
{
 bal=bal+b;
 cout<<"YOU WON!!!  Your bank balance is now $"<<bal<<endl;
}

//function for losing
void lose (int &bal, int &b)
{
 bal=bal-b;
 cout<<"HA HA!  You lost.  Your bank balance is now $"<<bal<<endl;
}

//function for random number generator
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