//Emilie Eggleston
//9-13-00
//9. Gas Mileage
//this program is designed to calculate gas mileage using
//beginning and ending mileages and amount of gas used

#include <conio.h>
#include <stdio.h>
#include <iostream.h>
int main(void)
{
clrscr ();

int
 bm=0,      //the identifiers I will use
 em=0;
float
 g=0,
 mpg=0;

printf("What is the beginning mileage? ");
cin>>bm;    //assigning the beginning mileage

cout<<"\nWhat is the ending mileage? ";
cin>>em;    //assingning the ending mileage as em

cout<<"\nHow many gallons of gas were used? ";
cin>>g;     //assigning gallons as g

//formula to calculate gas mileage
mpg=(em-bm)/g;

//The final output in a neat little form that the teacher has chosen
cout<<"\n                         Gas Mileage\n";
cout<<"                         -----------\n\n";
cout<<"Beginning        Ending\n";
cout<<" Mileage         Mileage           Gallons        MPG\n";
cout<<"---------        -------           -------       -----\n";
printf("  %d           %d        %10.2f     %8.2f",bm,em,g,mpg);

return 0;
}