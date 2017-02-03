//Emilie Eggleston
//Aug 9, '01
//BCP2 Refresher Program

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main(void)
{
clrscr(); //clearing screen

long int
 account_num=0;

float
 bbal=0,        //identifiers
 items,
 nbal=0,
 credit=0,
 limit=0;

//inputting amounts
cout<<"What is your account number? ";
cin>>account_num;

cout<<endl<<"What is your balance at the beginning of the month? ";
cin>>bbal;

cout<<endl<<"What is the total cost of items charged this month? ";
cin>>items;

cout<<endl<<"What is the total of all credit applied to your account this month? ";
cin>>credit;

cout<<endl<<"What is the allowed credit limit? ";
cin>>limit;

//formula for new balance
nbal=bbal+items-credit;

//if statement for credits exceeding limit
if(nbal>limit)
{
 cout<<"--------------------------------------------\n";
 cout<<"Account Number: "<<account_num<<endl;
 printf("Credit Limit: $%8.2f",limit);
 printf("\nNew Balance: $%8.2f",nbal);
 cout<<endl<<endl<<"CREDIT LIMIT EXCEEDED!";
}

//else statement for credits within limit
else
{
 cout<<"--------------------------------------------\n";
 cout<<"Account Number: "<<account_num<<endl;
 printf("Credit Limit: $%8.2f\n\n",limit);
 limit=limit-nbal;
 printf("Credit that's left: $%8.2f", limit);
}
//all done
}

