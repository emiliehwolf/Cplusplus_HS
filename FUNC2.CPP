//Emilie Eggleston
//2-02-01
//Functions packet #2 Calories

#include <iostream.h>
#include <conio.h>

//prototypes for functions
void input (int &carb, int &fat, int &pro);
void output (int total);
void form (int carb, int fat, int pro, int &total);

int main()
{
clrscr();

int
 tot=0,
 ca=0,
 fa=0,       //identifiers
 pr=0;

char
 yn;

 //do while loop for repeating
do
{

//calling functions
input (ca,fa,pr);
form (ca,fa,pr,tot);
output (tot);

//assigning yn as Y or N for repeating
cout<<"\nWould you like to run the program again? Y/N ";
cin>>yn;

}
while(yn=='y'||yn=='Y');

return 0;
}

//assigning carb, fat, and pro
void input (int &carb, int &fat, int &pro)
{
 cout<<"Enter grams of carbohydrate: ";
 cin>>carb;

 cout<<"Enter grams of fat: ";
 cin>>fat;

 cout<<"Enter grams of protein: ";
 cin>>pro;
}

//formula to find total of calories
void form (int carb, int fat, int pro, int &total)
{
 total= 4*carb + 9*fat + 4*pro;
}

//final output
void output (int total)
{
 cout<<"The serving contains "<<total<<" calories.";
}
