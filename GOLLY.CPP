//Emilie Eggleston
//Jolly Green Giant
//8-22-00
#include <iostream.h>
#include <conio.h>
int main()
{
int
 base=45,
 height=38,
 area,
 cost=4;
clrscr ();
cout<<"The cost of the material is "<<cost;
cout<<"\nThe height is "<<height;
cout<<"\nThe base is "<<base;
area=(base*height)/2;
cout<<"\nThe area is "<<area;
cost=(area*cost);
cout<<"\nThe price of the mask is "<<cost;
return 0;
}