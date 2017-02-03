//Emilie Eggleston
//November 27, 2001
//Shepherd Lions Club Cross-Country Race

#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <apstring.h>
#include <iomanip.h>

//global structure
struct cross_country
{
 apstring
  name,
  school,
  id,
  time;
};

//3 different functions for sorting
void insertion_sort_A (cross_country RACE[], int X);
void insertion_sort_B (cross_country RACE[], int X);
void insertion_sort_D (cross_country RACE[], int X);

void main(void)
{
clrscr();

//identifiers
int
 x=0,
 y=0;

char
 letter;

//do-while to repeat program
do
{
//reassiging x
x=0;

clrscr();

//inputting data file into structure array
cross_country race[50];
ifstream input("A:runners.txt",ios::in);

while(!input.eof())
{
 input>>race[x].name;
 input>>race[x].school;
 input>>race[x].id;
 input>>race[x].time;
 //x is the array size
 x++;
}

//asking which type of sort should be executed
cout<<"\t\tShepherd Lions Club Cross-Country Race\n\n";
cout<<"What would you like to see?\n\na) Alphabetical List of Runners\n";
cout<<"b) Alphabetical List of Schools\nc) List of Runners Ordered by ";
cout<<"School\nd) Final Finish Order\n";
cin>>letter;
clrscr();
/*

//outputting original list

for(y=(x-1);y>=0;y--)
 cout<<race[y].name<<" "<<race[y].school<<" "<<race[y].id<<" "<<race[y].time<<endl;
cout<<endl;
getch();
*/

//if choice A is chosen, function A is called, and new sort is outputted
if(letter=='a'||letter=='A')
{
 clrscr();
 insertion_sort_A(race,x);
 cout<<"Alphabetical Listing of Runners:"<<endl;

 for(y=(x-1);y>=0;y--)
  cout<<race[y].name<<endl;
}

//if choice B is chosen, function B is called, and new sort is outputted
if(letter=='b'||letter=='B')
{
 clrscr();
 insertion_sort_B(race,x);
 cout<<"Alphabetical Listing of Schools:"<<endl;

 for(y=(x-1);y>=0;y--)
  cout<<race[y].school<<endl;
}

//if choice C is chosen, function B is called, and new sort is outputted
if(letter=='c'||letter=='C')
{
 clrscr();
 insertion_sort_B(race,x);
 cout<<"Runners Ordered by School:"<<endl;

 for(y=(x-1);y>=0;y--)
  cout<<race[y].school<<"\t\t"<<race[y].name<<endl;
}

//if choice D is chosen, function D is called, and new sort is outputted
if(letter=='d'||letter=='D')
{
 clrscr();
 insertion_sort_D(race,x);
 cout<<"Final Finish Order:"<<endl;

 for(y=(x-1);y>=0;y--)
  cout<<race[y].name<<"\t\t"<<race[y].time<<endl;
}
/*

//outputting the newly sorted, full list

cout<<endl<<endl;
for(y=(x-1);y>=0;y--)
 cout<<race[y].name<<" "<<race[y].school<<" "<<race[y].id<<" "<<race[y].time<<endl;
cout<<endl;
*/

//asking to run again
cout<<endl<<endl<<"Run Again? (y/n) ";
cin>>letter;
}
while(letter=='y'||letter=='Y');

}

//function to sort names
void insertion_sort_A (cross_country RACE[], int X)
{
 int j, k;
 apstring key;
 for(j=1;j<X;j++)
 {
  key=RACE[j].name;

  for(k=j-1;(k>=0)&&(RACE[k].name<key);k--)
  {
   RACE[k+1].name=RACE[k].name;
   RACE[k+1].school=RACE[k].school;
   RACE[k+1].time=RACE[k].time;
  }

  RACE[k+1].name=key;
 }
}

//function to sort schools
void insertion_sort_B (cross_country RACE[], int X)
{
 int j, k;
 apstring key;
 for(j=1;j<X;j++)
 {
  key=RACE[j].school;

  for(k=j-1;(k>=0)&&(RACE[k].school<key);k--)
  {
   RACE[k+1].name=RACE[k].name;
   RACE[k+1].school=RACE[k].school;
   RACE[k+1].time=RACE[k].time;
  }

  RACE[k+1].school=key;
 }
}

//function to sort time
void insertion_sort_D (cross_country RACE[], int X)
{
 int j, k;
 apstring key;
 for(j=1;j<X;j++)
 {
  key=RACE[j].time;

  for(k=j-1;(k>=0)&&(RACE[k].time<key);k--)
  {
   RACE[k+1].name=RACE[k].name;
   RACE[k+1].school=RACE[k].school;
   RACE[k+1].time=RACE[k].time;
  }

  RACE[k+1].time=key;
 }
}