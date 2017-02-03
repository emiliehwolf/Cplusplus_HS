//Emilie Eggleston
//9-14-00
//12. Heart rate
//this program will take a person's age and resting heart rate and
//tell what the training heart rate should be

#include <iostream.h>
#include <stdio.h>
#include <conio.h>
int main(void)
{
clrscr ();

int
 age,
 rrate=0;
float
 trate=0;

cout<<"What is your age? ";
cin>>age;

cout<<"\nWhat is your resting heart rate (when you first wake up)? ";
cin>>rrate;

trate=0.7*(220-age)+0.3*rrate;

printf("\nYour training rate should be %4.2f beats per minute.",trate);

return 0;
}