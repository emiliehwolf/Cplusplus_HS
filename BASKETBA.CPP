//Emilie Eggleston
//8-31-00
//5. Basketball
/*This program is used to find the number of points scored
in a game.  All you do is input the number of each throw made*/
#include <iostream.h>
#include <conio.h>
int main ()
{
clrscr ();
int
 free=0,
 three=0,
 reg=0,
 totp=0;
cout<<"Enter the number free throws ";
//Since free throws are one point, # of throws = # of points
cin>>free;
cout<<"\nEnter the number of three pointers ";
cin>>three;
//Three pointers are 3 points each... obviously
three=three*3;
cout<<"\nEnter the number of regular throws ";
cin>>reg;
//Regular throws are 2 points each
reg=reg*2;
totp=free+three+reg;/*I added the points of the different throws
to come up the the total points*/
cout<<"\nThe total number of points made is "<<totp;
return 0;
}