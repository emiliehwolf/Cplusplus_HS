//Emilie Eggleston
//4-17-01
//Structures #6
//This program will find people eligible for Social Security

#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <iomanip.h>
#include <apstring.h>

void main(void)
{
clrscr();

int
 x=0,   //identifiers
 j=0;

struct old_people
{
 apstring
  name;

  int
  age;

 apstring
  address,
  phone,
  sex;
};

old_people balding [20];
ifstream input ("A:AGE.TXT",ios::in);

while (!input.eof())
{
input>>balding[j].name;
input>>balding[j].age;
input>>balding[j].address;
input>>balding[j].phone;
input>>balding[j].sex;
j++;
}
j--;

//output for males
cout<<"Eligible Male Recipients\n";
cout<<setw(8)<<"Name"<<setw(5)<<"Age"<<setw(15)<<"Address";
cout<<setw(15)<<"Phone Number"<<setw(5)<<"Gender\n\n";

//for loop and if statement to find eligible males
for(x=0; x<j; x++)
{
 if(balding[x].age>=63 && balding[x].sex=="M")
 {
  //output for a nice table of male recipients
  cout<<setw(8)<<balding[x].name<<setw(5)<<balding[x].age<<setw(15)<<balding[x].address;
  cout<<setw(15)<<balding[x].phone<<setw(5)<<balding[x].sex<<endl;
 }
}

//output for females
cout<<endl<<endl<<"Eligible Female Recipients\n";
cout<<setw(8)<<"Name"<<setw(5)<<"Age"<<setw(15)<<"Address";
cout<<setw(15)<<"Phone Number"<<setw(5)<<"Gender\n\n";

//for loop and if statement to find eligible females
for(x=0; x<j; x++)
{
 if(balding[x].age>=63 && balding[x].sex=="F")
 {
  //output for a nice table of male recipients
  cout<<setw(8)<<balding[x].name<<setw(5)<<balding[x].age<<setw(15)<<balding[x].address;
  cout<<setw(15)<<balding[x].phone<<setw(5)<<balding[x].sex<<endl;
 }
}
//the end
}