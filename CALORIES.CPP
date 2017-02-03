//Emilie Eggleston
//9-5-00
//6. Burning Calories
/*This program is designed to find the number of pounds a person
would supposedly lose if he/she did bicycling, jogging, and swimming.*/
#include <iostream.h>
#include <conio.h>

int main ()
{

clrscr ();

int            //Here are the intergers I'll use
 Bike=0,       //Bicycling
 Jog=0,        //Jogging
 Swim=0,       //Swimming
 totcal=0,     //Total calories burned
 lbslost=0;    //Total pounds lost

cout<<"How many hours did you spend bicycling? ";
cin>>Bike;
//you burn 200 calories per hour so I multiplied by 200
Bike=200*Bike;
cout<<"\nYou burned "<<Bike<<" calories while bicycling.";

cout<<"\nHow many hours did you spend jogging? ";
cin>>Jog;
//475 calories are burned per each hour of jogging
Jog=475*Jog;
cout<<"\nYou burned "<<Jog<<" calories while jogging.";

cout<<"\nHow many hours did you spend swimming? ";
cin>>Swim;
//275 calories are worked off per each hour of swimming
Swim=275*Swim;
cout<<"\nYou burned "<<Swim<<" calories while cooling off in the water.";

//Now I'll add all the calories burned to get the total
totcal=Bike+Jog+Swim;
cout<<"\nYou burned a total of "<<totcal<<" calories.";

//To get the # of lbs lost, I divided by 3500, I hope that's right
lbslost=totcal/3500;
cout<<"\nYou supposedly lost "<<lbslost<<" pound(s).";

return 0;
}