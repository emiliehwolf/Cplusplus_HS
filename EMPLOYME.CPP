//Emilie Eggleston
//January 17, 2001
//Employment Roster from TCEA Area Programming Contest

#include <conio.h>
#include <iostream.h>
#include <apstring.h>
#include <fstream.h>
#include <iomanip.h>

void bubble_sort_ascending(apstring ARRAY[], int arraylength);

//global structure
struct employment
{
 apstring
  cat,
  name;
};

//beginning of main program
void main(void)
{
clrscr();

int
 x=0,
 y=0,     //identifiers
 B=0,
 Y=0,
 M=0,
 P=0;

apstring
 baby[17],   //arrays
 yard[17],
 main[17],
 petg[17];

//inputting data file into array
employment array [20];
ifstream input("A:pr92.dat",ios::in);
do
{
 input>>array[x].cat;
 input>>array[x].name;
 x++;
}while(array[x-1].cat!="*");

//x is the array length for the whole structure list
x--;

//left aligning the output
cout<<setiosflags(ios::left);
cout<<setw(18)<<"BABYSITTING"<<setw(18)<<"YARDWORK";
cout<<setw(18)<<"MAINTENANCE"<<setw(18)<<"PET GROOMING"<<endl;
cout<<"---------------------------------------------------------------------\n";

//running through the list to put names in their proper categories
for(y=0;y<x;y++)
{
 if(array[y].cat=="B")
 {
  baby[B]=array[y].name;
  B++;
 }

 if(array[y].cat=="Y")
 {
  yard[Y]=array[y].name;
  Y++;
 }

 if(array[y].cat=="M")
 {
  main[M]=array[y].name;
  M++;
 }

 if(array[y].cat=="P")
 {
  petg[P]=array[y].name;
  P++;
 }
}

//sorting each array
bubble_sort_ascending(baby, B);
bubble_sort_ascending(yard, Y);
bubble_sort_ascending(main, M);
bubble_sort_ascending(petg, P);

//final output
cout<<"---------------------------------------------------------------------\n";
for(y=0;y<x;y++)
{
cout<<setw(18)<<baby[y]<<setw(18)<<yard[y];
cout<<setw(18)<<main[y]<<setw(18)<<petg[y]<<endl;
}

getch();
//end of main program
}

//function to sort
void bubble_sort_ascending(apstring ARRAY[], int arraylength)
{
 int i, j, flag=1;
 apstring temp;

 for(i=1; (i<=arraylength)&&flag; i++)
 {
  flag=0;
  for(j=0; j<(arraylength-i); j++)
  {
   if(ARRAY[j+1]<ARRAY[j])
   {          //^changes ascending and descending
    temp=ARRAY[j+1];
    ARRAY[j+1]=ARRAY[j];
    ARRAY[j]=temp;
    flag=1;
   }
  }
 }
}