//Emilie Eggleston
//3-20-01
//Pg 562 #9

#include <conio.h>
#include <iostream.h>
#include <fstream.h>
#include <apstring.h>

void main(void)
{
clrscr();

int
 x=0,  //identifiers
 i;

//Assigning structure for inputting data
struct bird
{
 int tag;
 apstring site,
	sex,
	type,
	date,
	DNR_name;
};

//Array
bird birdie[50];
ifstream input ("A:BIRDS.txt", ios::in);

i=0;

//inputting the data into array
while (!input.eof())
{
 input>>birdie[i].tag;
 input>>birdie[i].site;
 input>>birdie[i].sex;
 input>>birdie[i].type;
 input>>birdie[i].date;
 input>>birdie[i].DNR_name;

 //counting i
 i++;
}
i--;

//output for male birds
cout<<"\tMale Birds\n\n";

//for loop to output table for male birds' data
for(x=0;x<i;x++)
{
 if(birdie[x].sex=="Male")
 {
  cout<<"Tag Number             "<<birdie[x].tag<<endl;
  cout<<"Tagging Site           "<<birdie[x].site<<endl;
  cout<<"Sex of bird            "<<birdie[x].sex<<endl;
  cout<<"Type of bird           "<<birdie[x].type<<endl;
  cout<<"Date                   "<<birdie[x].date<<endl;
  cout<<"Name of DNR officer    "<<birdie[x].DNR_name<<endl<<endl;
 }
}

cout<<"\tFemale Birds\n\n";
x=0;

//for loop to output data for female birds
for(x=0;x<i;x++)
{
 if(birdie[x].sex=="Female")
 {
  cout<<"Tag Number             "<<birdie[x].tag<<endl;
  cout<<"Tagging Site           "<<birdie[x].site<<endl;
  cout<<"Sex of bird            "<<birdie[x].sex<<endl;
  cout<<"Type of bird           "<<birdie[x].type<<endl;
  cout<<"Date                   "<<birdie[x].date<<endl;
  cout<<"Name of DNR officer    "<<birdie[x].DNR_name<<endl<<endl;
 }
}
//end of program
}