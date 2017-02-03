//Emilie Eggleston
//2-14-01
//Functions #7    This program will analyze data for a family

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//prototypes for functions
void familyID (float &id);
void familynumber (float &num);
void totalincome (float &inc);
void totdebts (float &debts);
void output (float id, float num, float inc, float debts, float ele, float mon, float sav, float fee);

float main()
{
clrscr();

char
 yn;                      //identifiers

float
 number,
 idnumber,
 income,
 total_debts,
 expected_living_expenses,
 monthly_payment,
 savings,
 service_fee;

 //do-while loop for repeating program
do
{

//calling functions
familyID (idnumber);
familynumber (number);
totalincome (income);
totdebts (total_debts);
output (idnumber, number, income, total_debts, expected_living_expenses, monthly_payment, savings, service_fee);

//assignin yn for do-while loop
cout<<"\n\nDo you want to run the program again? (y/n) ";
cin>>yn;
}
while (yn=='y' || yn=='Y');

return 0;
}

//function to find family ID
void familyID (float &id)
{
 cout<<"What is the family ID number? ";
 cin>>id;
}

//function to find family size
void familynumber (float &num)
{
 cout<<"How many family members are there? ";
 cin>>num;
}

//function to find income
void totalincome (float &inc)
{
 cout<<"What is the total income? ";
 cin>>inc;
}

//function for finding total debts
void totdebts (float &debts)
{
 cout<<"How much is owed in debts? ";
 cin>>debts;
}

//function for final output
void output (float id, float num, float inc, float debts, float ele, float mon, float sav, float fee)
{
 cout<<"\n\t\tFamily Budget Assistance Center\n\t\t\tMonth Year\n\t\t";
 cout<<"Telephone: (800) 555 - 1234\n\n";
 cout<<"Identification Number\t\t"<<id;
 cout<<"\nFamily Size\t\t\t"<<num;
 printf("\nAnnual Income\t\t\t$%6.2f",inc);
 printf("\nTotal Debt\t\t\t$%6.2f",debts);
 ele=3000*num;
 printf("\nExpected Living Expenses\t$%6.2f",ele);
 mon=debts/12;
 printf("\nMonthly Payment\t\t\t$%6.2f",mon);
 sav=num*.02*(inc-debts);
 printf("\nSavings\t\t\t\t$%6.2f",sav);
 fee=inc*.005;
 printf("\nService Fee\t\t\t$%6.2f",fee);
}