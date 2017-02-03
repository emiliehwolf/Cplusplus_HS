//Emilie Eggleston
//1-23-01
//Pg 487 #2
//This program will help balance a checkbook

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main(void)
{
clrscr();

int
 j,
 x,
 countd=0,        //identifiers
 countw=0,
 code[60];

float
 bal,
 bbal,
 rb[60],
 w[30],
 d[30];

char
 trans[60];

//Assigning begining balance and bal
cout<<"What is your beginning balance? ";
cin>>bbal;
bal=bbal;

//Assigning x for the loop
cout<<"How many transactions did you make? ";
cin>>x;

//for loop to assign transactions and characters and other stuff
for(j=0; j<x; j++)
{
 cout<<"Is your transaction a deposit(D) or withdrawal(W)? ";
 cin>>trans[j];

 //if statement for withdrawals
 if(trans[j]=='w' || trans[j]=='W')
 {
   cout<<"How much was withdrawn? ";
   cin>>w[j];
   trans[j]='W';

   //assigning transaction code
   cout<<"What was the transaction code? ";
   cin>>code[j];

   countw++;
   //formual for finding ending balance
   bal=bal-w[j];
 }

 //if statement for deposits
 if(trans[j]=='d' || trans[j]=='D')
 {
  cout<<"How much was deposited? ";
  cin>>d[j];
  trans[j]='D';

  //assigning transaction code
  cout<<"What was the transaction code? ";
  cin>>code[j];
  countd++;
  //formula for ending balance
  bal=bal+d[j];
 }

 //formula for running balance in an array
 rb[j]=bal;
}

//output for neat table of a checkbook
cout<<"\nTrans\tCode\tAmount\t\tBalance\n";
cout<<"\t\t\t\t"<<bbal;

//for loop to put everything in the checkbook
for(j=0; j<x; j++)
{
 //if statement for deposits
 if(trans[j]=='D')
 {
  printf("\n%c\t%4d\t%5.2f\t\t%5.2f",trans[j],code[j],d[j],rb[j]);
 }

 //if statement for withdrawals
 if(trans[j]=='W')
 {
  printf("\n%c\t%4d\t%5.2f\t\t%5.2f",trans[j],code[j],w[j],rb[j]);
 }
}

//The output for ending balance and # of deposits and withdrawals
printf("\n\nYour ending balance is $%7.2f",bal);
cout<<"\nNumber of withdrawals: "<<countw;
cout<<"\nNumber of deposits: "<<countd;

//if statement for overdrawn accounts
if(bal<0)
{
 cout<<"\nYour account is overdrawn!";
}

}