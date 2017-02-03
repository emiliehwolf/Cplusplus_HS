//Emilie Eggleston
//10-2-00
//Enter an integer and it will tell you whether it's even or odd

#include <iostream.h>
#include <conio.h>

main()
{
clrscr();

int   //My identifier is just x
 x;

 //assigning integer as x
cout<<"Enter an integer: ";
cin>>x;

//For an even number
if(x%2==0)
{
if(x>0)
{
cout<<x<<" is an even number.\n";
}
}

//For an odd number
if(x%2==1)
{
cout<<x<<" is an odd number. \n";
}

//For the number 0
if(x==0)
{
cout<<x<<" is neither even nor odd; it's just 0.";
}

return 0;
}