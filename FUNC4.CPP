//Emilie Eggleston
//2-6-01
//Functions #4
//This program will request to add, subtract, divide, or multiply,
//and then ask for the two numbers

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//prototypes for functions
void add (float number1, float number2, float answer);
void sub (float number1, float number2, float answer);
void div (float number1, float number2, float answer);
void mul (float number1, float number2, float answer);

float main()
{
clrscr();

float
 x,
 num1,
 num2,
 ans;       //identifiers

char
 yn;

 //do-while loop to repeat program
do
{

//assigning x
cout<<"Do you want to...\n(1) Add\n(2) Subtract\n(3) Multiply\n";
cout<<"(4) or Divide\n";
cin>>x;

//assigning the 2 numbers
cout<<"What two numbers do you want to use? ";
cin>>num1>>num2;

//4 if statements for 4 functions
if(x==1)
add (num1, num2, ans);

if(x==2)
sub (num1, num2, ans);

if(x==3)
mul (num1, num2, ans);

if(x==4)
div (num1, num2, ans);

//assigning yn for do-while loop
cout<<"\nWould you like to run the program again? y/n ";
cin>>yn;

}
while(yn=='y' || yn=='Y');

return 0;
}

//function to add and then output
void add (float number1, float number2, float answer)
{
 answer=number1+number2;
 printf("%f + %f = %8.5f",number1, number2, answer);
}

//fuction to subtract
void sub (float number1, float number2, float answer)
{
 answer=number1-number2;
 printf("%f - %f = %8.5f",number1, number2, answer);
}

//function to divide
void div (float number1, float number2, float answer)
{

 //if statements for numbers equal to 0
 if(number2==0)
 {
  cout<<"The second number can not be 0.  Enter a new number ";
  cin>>number2;
 }
 answer=number1/number2;
 printf("%f / %f = %8.5f",number1, number2, answer);
}

//function for multiplying
void mul (float number1, float number2, float answer)
{
 answer=number1*number2;
 printf("%f * %f = %8.5f",number1, number2, answer);
}

