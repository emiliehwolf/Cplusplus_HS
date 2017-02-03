//Emilie Eggleston
//12-8-00
//17. Hospital Bill

/*This program will ask for how many days you were at the hospital and what
options you used and then compute a bill*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <apstring.h>

void main(void)
{
clrscr();

int
days;

float
 subtotal,
 total,
 grtotal=0,      //Lots of identifiers
 phonecharge,
 tvcharge,
 roomcharge,
 grpc=0,
 grsub=0,
 grtvc=0;

apstring
 phone,
 tv,
 room;

char
 yn;

do
{

//Assigning days, room, telephone, and TV
cout<<"How many days did you spend at the Community Hospital? ";
cin>>days;

cout<<"Was your room Private, Semiprivate, or Ward? (p,s,w) ";
cin>>room;

if (room!="p"&&room!="P"&&room!="s"&&room!="S"&&room!="w"&&room!="W")
{
 cout<<"Enter another letter (p,s,w): ";
 cin>>room;
}

cout<<"Did you use the telephone? Y or N ";
cin>>phone;

cout<<"Did you watch any television? Y or N ";
cin>>tv;

//If statements to assign charges
if(room=="p" || room=="P")
{
room="Private";
roomcharge=125;
}

if(room=="s" || room=="S")
{
room="Semiprivate";
roomcharge=95;
}

if(room=="w" || room=="W")
{
room="Ward";
roomcharge=75;
}

if(phone=="Y" || phone=="y")
{
phonecharge=1.75;
}

else
{
phonecharge=0;
}

if(tv=="Y" || tv=="y")
{
tvcharge=3.50;
}

else
{
tvcharge=0;
}

//Formulas
subtotal=days*roomcharge;
phonecharge=phonecharge*days;
tvcharge=tvcharge*days;
total=subtotal+phonecharge+tvcharge;
grtotal=total+grtotal;
grpc=grpc+phonecharge;
grtvc=grtvc+tvcharge;
grsub=grsub+subtotal;

//Final Output for Bill
cout<<"\n\nCommunity Hospital";
cout<<"\nPatient Billing Statement";
cout<<"\n\nNumber of days in hospital: "<<days;
cout<<"\nType of room: "<<room;
printf("\n\nRoom charge:          $%8.2f",subtotal);
printf("\nTelephone charge:     $%8.2f",phonecharge);
printf("\nTelevision charge:    $%8.2f",tvcharge);
printf("\n\nTOTAL DUE:            $%8.2f",total);

cout<<"\n\nDo you want to enter another patient? Y/N ";
cin>>yn;

}
while(yn=='y' || yn=='Y');

cout<<"\nSummary of Patients\n";
printf("\nTotal Room Charge Due:\t\t$%8.2f",grsub);
printf("\nTotal Telephone Charge Due:\t$%8.2f",grpc);
printf("\nTotal Television Charge Due:\t$%8.2f",grtvc);
printf("\n\nTotal Charge Due:\t\t$%8.2f",grtotal);

}
