//Emilie Eggleston
//3-6-01
//Recursion for Factorial

#include <iostream.h>
#include <conio.h>

//function
long int f(long int x);

long int main()
{
clrscr();

long int
 num,      //identifiers
 ans;

//assigning num
cout<<"What number do you want a factorial of? ";
cin>>num;

//calling function
f(num);

//assigning ans as the function after it's returned
ans=f(num);

//outputting ans
cout<<ans;

return 0;   //end of main program
}

//function for factorial using recursion
long int f(long int x)
{

 if(x==1)
 {
   return x;
 }

 else
 {
  return f (x-1)*x;
 }
}