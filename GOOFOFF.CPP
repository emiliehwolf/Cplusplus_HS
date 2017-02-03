//Emilie Eggleston
//2-9-01
//Functions #5
/*This program will prepare bills for the Caswell Catering and
Convention Services*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//prototypes for functions
void people (float &ad, float &ch, float &me, float &adtot, float &chme,
	     float &chtot, char yn2, float &sub);
void roomtype (float &ha, char yn2);
void weekends (float &sur, char yn2, float &final);
void taxandtip (float &tax, float &sub, float &final);
void discounts (char &yn3, float &dis, float &final, float &dep, float &tot);
void output (char yn3, float ad, float ch, float adtot, float chtot,
	     float final, float sub, float tax, float sur, float dis,
	     float dep, float me, float ha, float tot, float chme);

float main()
{
clrscr();

float
 adults=0,
 children=0,
 subtotal=0,
 finaltotal=0,
 total=0,
 hall=0,            //identifiers
 surcharge=0,
 tax_tip=0,
 deposit=0,
 discount=0,
 adtotal=0,
 childtotal=0,
 childmeal=0,
 meal=0;

char
 yn,
 yynn;

//do-while loop to repeat
do
{

//calling functions
people (adults, children, meal, adtotal, childmeal, childtotal, yn, subtotal);
roomtype (hall, yn);
taxandtip (tax_tip, subtotal, finaltotal);
weekends (surcharge, yn, finaltotal);
discounts (yynn, discount, finaltotal, deposit, total);
output (yynn, adults, children, adtotal, childtotal, finaltotal, subtotal,
	tax_tip, surcharge, discount, deposit, meal, hall, total, childmeal);

//assigning yn as yes or no for do-while loop
cout<<"\n\nDo you want to run the program again? y/n ";
cin>>yn;

}
while(yn=='y' || yn=='Y');

return 0;

}

//function to figure out total food cost for adults and children
void people (float &ad, float &ch, float &me, float &adtot, float &chme,
	     float &chtot, char yn2, float &sub)
{
 //assigning meal type
 cout<<"What type of meal did the party order?\n(D) Deluxe\n(S) Standard\n";
 cin>>yn2;

 //if statements for assigning price of meals
 if(yn2=='d' || yn2=='D')
 {
  me=15.80;
  chme=me*.6;
 }
 if(yn2=='s' || yn2=='S')
 {
  me=11.75;
  chme=me*.6;
 }

 //assigning number of adults and children
 cout<<"How many adults were in the party? ";
 cin>>ad;
 cout<<"How many children? ";
 cin>>ch;

 //formulas
 adtot=ad*me;
 chtot=ch*chme;
 sub=adtot+chtot;
}

//function to find roomtype and it's price
void roomtype (float &ha, char yn2)
{
 cout<<"What type of room was used?\nRoom A\nRoom B\nRoom C\nRoom D\nRoom E";
 cout<<"\nCatered at home (H)\n";
 cin>>yn2;

 //if statements for room
 if(yn2=='a' || yn2=='A')
 ha=55;
 if(yn2=='b' || yn2=='B')
 ha=75;
 if(yn2=='c' || yn2=='C')
 ha=85;
 if(yn2=='d' || yn2=='D')
 ha=100;
 if(yn2=='e' || yn2=='E')
 ha=130;
 if(yn2=='h' || yn2=='H')
 ha=0;
}

//function to find tax and tip
void taxandtip (float &tax, float &sub, float &final)
{
 //formula
 tax=sub*.18;
}

//function to find surcharge
void weekends (float &sur, char yn2, float &final)
{
 cout<<"Was the party catered on the weekend (Fri, Sat, or Sun)? y/n ";
 cin>>yn2;

 if(yn2=='y' || yn2=='Y')
 {
  //formula for surcharge
  sur=.07*final;
 }
}

//function to find the discount (if any) and the deposit
void discounts (char &yn3, float &dis, float &final, float &dep, float &tot)
{
 cout<<"Will the bill be payed within 10 days? y/n ";
 cin>>yn3;

 //if statements for finding rate of discount
 if(yn3=='y' ||yn3=='Y')
 {
  if(final<100)
  dis=.005;

  if(final>=100 && final<200)
  dis=.015;

  if(final>=200 && final<400)
  dis=.03;

  if(final>=400 && final<800)
  dis=.04;

  if(final>=800)
  dis=.05;
 }

 //assigning deposit
 cout<<"How much was deposited at this point? ";
 cin>>dep;
}

//function for final output
void output (char yn3, float ad, float ch, float adtot, float chtot,
	     float final, float sub, float tax, float sur, float dis,
	     float dep, float me, float ha, float tot, float chme)

{
 cout<<"\n\tCaswell Catering and Convention Service\n\t\t\tFinal Bill\n\n";
 printf("Number of adults:\t%2.0f\t\t",ad);
 printf("Number of children:\t%2.0f",ch);
 printf("\nCost per adult:\t\t%2.2f\t\tCost per child:\t\t%2.2f",me,chme);
 printf("\nPay within 10 days:\t%c",yn3);
 printf("\nTotal cost for adult meals:\t%4.2f\t",adtot);
 printf("Total cost for child meals:\t%4.2f",chtot);
 printf("\nTotal food cost:\t\t%4.2f",sub);
 printf("\nPlus Tax & Tip:\t\t\t%3.2f",tax);
 printf("\nPlus Surcharge:\t\t\t%2.2f",sur);
 printf("\nPlus Room Fee:\t\t\t%3.2f",ha);
 printf("\nLess Deposit:\t\t\t-%4.2f",dep);
 //formula for tot
 tot=sub+tax+sur+ha-dep;
 printf("\n\nSubtotal:\t\t\t%4.2f",tot);
 //formula for discount
 dis=dis*(sub+tax+sur+ha);
 printf("\nLess Discount:\t\t\t-%3.2f",dis);
 //formula for final
 final=tot-dis;
 printf("\n\nBalance Due:\t\t\t$%4.2f",final);
}