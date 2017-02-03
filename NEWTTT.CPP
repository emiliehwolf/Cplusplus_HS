//Emilie Eggleston
//September 27, 2001 -- October 9, 2001
//Tic Tac Toe

#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
#include <stdlib.h>

//function for Random Number Generator
void rng (int &X, int &Y, int LOW, int HIGH);
void check (char TTT [3][3], int &WINNER);
void table (char TTT [3][3]);
void player (char TTT, int &game, char &p1, char&p2);

void main(void)
{
clrscr();

int
 v=0,
 winner=0,
 low=0,
 high=2,      //identifiers
 x=0,
 y=0,
 game=0;

char
 p1,
 p2,
 yn;

//2-D array
char ttt [3][3];

//do-while loop to repeat program
do
{
 clrscr();

 //reassigning winner and v to 0
 winner=0;
 v=0;

 //for loop to reassign the 2-D array to spaces
 for(x=0;x<3;x++)
 {
  for(y=0;y<3;y++)
  {
   ttt[x][y]=' ';
  }
 }

 cout<<"\t\t\tTic-Tac-Toe\n1. 1 Player\n2. 2 Players\n\n";
 cin>>game;
 clrscr();

 player(ttt, game, p1, p2);

 clrscr();
 //calling the function to output blank table
 table (ttt);

 //do-while to only input 9 times
 do
 {

 if(P1=='O' && game==2)
 {
  do
  {
   //calling function for random x and y coordinates for computer
   rng (x, y, low, high);
  }
  while(ttt[x][y]!=' ');
  v++;
 }
 if(

  //do-while loop to enter coordinates that won't overwrite previous entries
  do
  {
   cout<<endl<<"Enter the coordinates of your move: ";
   cin>>x>>y;
  }
  while(ttt[x][y]!=' ');

  ttt[x][y]=P1;

  //adding 1 to v to stop game after all spots are filled
  v++;

  //calling function for output
  table (ttt);
  //calling function to check for 3 in a row
  check (ttt, winner);

  if(winner==1 || winner==2)
   break;

  if(v>7)
   break;


  //do-while loop so previous X's and O's won't be written over
  do
  {
   //calling function for random x and y coordinates for computer
   rng (x, y, low, high);
  }
  while(ttt[x][y]!=' ');
  v++;

  ttt[x][y]='O';

  //outputting table
  table (ttt);

  check (ttt, winner);
  if(winner==1 || winner==2)
   break;

 //end of do-while loop
 }
 while(v<9);

 //output for winner of either game
 cout<<endl;
 if(winner==1)
  cout<<"The winner is X's";
 if(winner==2)
  cout<<"The winner is O's";
 if(winner==0)
  cout<<"~~~Cat Game~~~   >^..^<";

 //asking to repeat games
 cout<<endl<<"Play Again? (y/n) ";
 cin>>yn;

}
while(yn=='y'||yn=='Y');


//end of main program
}


//Random Number Generator
void rng (int &X, int &Y, int LOW, int HIGH)
{
 time_t seconds;

 time(&seconds);
 srand((unsigned int) seconds);
 X=rand()%(HIGH-LOW+1)+LOW;
 Y=rand()%(HIGH-LOW+1)+LOW;
}


//function for tic-tac-toe board
void table (char TTT [3][3])
{
 char
  A=196,
  B=179,
  C=197;

 clrscr();
 cout<<"\t\t 0   1   2"<<endl<<endl<<endl;
 cout<<"\t0\t "<<TTT[0][0]<<" "<<B<<" "<<TTT[0][1]<<" "<<B<<" "<<TTT[0][2]<<endl;
 cout<<"\t\t"<<A<<A<<A<<C<<A<<A<<A<<C<<A<<A<<A<<endl;
 cout<<"\t1\t "<<TTT[1][0]<<" "<<B<<" "<<TTT[1][1]<<" "<<B<<" "<<TTT[1][2]<<endl;
 cout<<"\t\t"<<A<<A<<A<<C<<A<<A<<A<<C<<A<<A<<A<<endl;
 cout<<"\t2\t "<<TTT[2][0]<<" "<<B<<" "<<TTT[2][1]<<" "<<B<<" "<<TTT[2][2]<<endl;
}


//function to check for 3 in a row
void check (char TTT [3][3], int &WINNER)
{
 int
 j=0,
 k=0,
 row=0,   //local identifiers
 col=0,
 diga=0,
 digb=0;

 /*
 //nested for loops to check for rows
 for(j=0;j<3;j++)
 {
  for(k=0;k<3;k++)
  {
   if(TTT[j][k]=='X')
    row=row+50;
   if(TTT[j][k]=='O')
    row=row+1;
  }

  //'1' means that X's won
  if(row==150)
   WINNER=1;

  //'2' means that O's won
  if(row==3)
   WINNER=2;
 }
 */

//checking for 3 in a row for the rows
 if(TTT[0][0]=='X' && TTT[0][1]=='X' && TTT[0][2]=='X')
  //'1' is X's
  WINNER=1;
 if(TTT[0][0]=='O' && TTT[0][1]=='O' && TTT[0][2]=='O')
  //'2' is O's
  WINNER=2;
 //next row
 if(TTT[1][0]=='X' && TTT[1][1]=='X' && TTT[1][2]=='X')
  WINNER=1;
 if(TTT[1][0]=='O' && TTT[1][1]=='O' && TTT[1][2]=='O')
  WINNER=2;
 //next row
 if(TTT[2][0]=='X' && TTT[2][1]=='X' && TTT[2][2]=='X')
  WINNER=1;
 if(TTT[2][0]=='O' && TTT[2][1]=='O' && TTT[2][2]=='O')
  WINNER=2;

 /*
 //nested for loops to check columns
 for(k=0;k<3;k++)
 {
  for(j=0;j<3;j++)
  {
   if(TTT[k][j]=='X')
    col=col+50;
   if(TTT[k][j]=='O')
    col=col+1;
  }

  if(col==150)
   WINNER=1;
  if(col==3)
   WINNER=2;

 }
 */

//checking for 3 in a row for the columns
 if(TTT[0][0]=='X' && TTT[1][0]=='X' && TTT[2][0]=='X')
  WINNER=1;
 if(TTT[0][0]=='O' && TTT[1][0]=='O' && TTT[2][0]=='O')
  WINNER=2;
 //next column
 if(TTT[0][1]=='X' && TTT[1][1]=='X' && TTT[2][1]=='X')
  WINNER=1;
 if(TTT[0][1]=='O' && TTT[1][1]=='O' && TTT[2][1]=='O')
  WINNER=2;
 //next column
 if(TTT[0][2]=='X' && TTT[1][2]=='X' && TTT[2][2]=='X')
  WINNER=1;
 if(TTT[0][2]=='O' && TTT[1][2]=='O' && TTT[2][2]=='O')
  WINNER=2;

 //reassigning j and k
 j=0;
 k=0;

 //while loop to find diagonal A
 while(j<3)
 {
  if(TTT[j][j]=='X')
   diga=diga+50;

  if(TTT[j][j]=='O')
   diga=diga+1;

  j++;
 }

 if(diga==150)
  WINNER=1;
 if(diga==3)
  WINNER=2;

 //reassigning j and k
 j=0;
 k=2;

 //while loop to find diagonal B
 while(j<3&&k>=0)
 {
  if(TTT[j][k]=='X')
   digb=digb+50;

  if(TTT[j][k]=='O')
   digb=digb+1;

  j++;
  k--;
 }

 if(digb==150)
  WINNER=1;
 if(digb==3)
  WINNER=2;
}




void player (char TTT, int &GAME, char &P1, char &P2)
{
 int
 LOW=1,
 HIGH=2;

 cout<<"\t\t\tTic-Tac-Toe\n1. 1 Player\n2. 2 Players\n\n";
 cin>>GAME;
 clrscr();

 if(GAME==1)
 {
  cout<<"Who should go first?\n\n1. You (X's)\n2. Computer (O's)\n3. Random\n\n";
  cin>>P1;

  if(P1=='1')
  {
   P1='X';
   P2='O';
  }
  if(P1=='2')
  {
   P1='O';
   P2='X';
  }

  else
  {
   time_t seconds;

   time(&seconds);
   srand((unsigned int) seconds);
   P1=rand()%(HIGH-LOW+1)+LOW;

   if(P1=='1')
   {
    P1='X';
    P2='O';
   }
   if(P1=='2')
   {
    P1='O';
    P2='X';
   }
  }
 }

 if(GAME=2)
 {
  clrscr();
  cout<<"Who goes first?  \n1. X's\n2. O's\n\n";
  cin>>P1;

  if(P1=='1')
  {
   P1='X';
   P2='O';
  }
  if(P1=='2')
  {
   P1='O';
   P2='X';
  }
 }
}