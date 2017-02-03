//Emilie Eggleston
//9-15-00
//Penny Spender Supermarket
//This calculates the cost for an item if you just input the weight and
//cost per pound...... a lot of work just to multiply
#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int main(void)
{
clrscr ();

char
 item;      //this must be a character because there's no #s
float
 weight=0,
 costplb=0,  //The other identifiers
 cost=0;

//Entering item, weight, and cost/lb
cout<<"What is the item? ";
cin>>item;

cout<<"\nWhat is the weight and cost per pound? \n";
cin>>weight>>costplb;

//Formula for total cost of item
cost=weight*costplb;

//Now here is the final output all nice and neat... not
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
cout<<"\t\tPenny Spender Supermarket\n";
cout<<"\t\t\tProduce Department\n\n";
cout<<"ITEM\t\tWEIGHT\t\tCOST/LB\t\tCOST\n\n";
printf("%c\t\t%4.1flb\t\t$%6.2f\t\t$%6.2f",item,weight,costplb,cost);
cout<<"\n\n\t\t\tThank you!!\n\n";
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";

return 0;
}