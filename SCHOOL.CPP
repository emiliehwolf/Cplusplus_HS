//Emilie Eggleston
//Structures #7
//4-19-01

#include <iostream.h>
#include <apstring.h>
#include <conio.h>
#include <fstream.h>
#include <iomanip.h>

void main (void)
{
clrscr();

int
 x=0,     //identifiers
 j=0;

//structure
struct data
{
 apstring
  name,
  number,
  clas,
  com,
  tak,
  gpa;
};

//inputting text file into array
data school [25];
ifstream input ("A:CLASS.TXT",ios::in);

//inputting array into structure
while (!input.eof())
{
 input>>school[j].name;
 input>>school[j].number;
 input>>school[j].clas;
 input>>school[j].com;
 input>>school[j].tak;
 input>>school[j].gpa;
j++;
}

//output for headings
cout<<"FRESHMAN"<<endl;
cout<<setw(10)<<"Name"<<setw(8)<<"Number"<<setw(8)<<"Class"<<setw(18)<<"Hours Completed";
cout<<setw(14)<<"Hours Taken"<<setw(8)<<"GPA"<<endl;

//for loop and if statement to find freshman
for(x=0;x<j;x++)
{
 if(school[x].clas=="1")
 {
  //outputting data
  cout<<setw(10)<<school[x].name<<setw(8)<<school[x].number<<setw(8);
  cout<<school[x].clas<<setw(18)<<school[x].com<<setw(14)<<school[x].tak;
  cout<<setw(8)<<school[x].gpa;
 }
}


cout<<endl<<endl<<"SOPHOMORE"<<endl;
cout<<setw(10)<<"Name"<<setw(8)<<"Number"<<setw(8)<<"Class"<<setw(18)<<"Hours Completed";
cout<<setw(14)<<"Hours Taken"<<setw(8)<<"GPA"<<endl;

//for loop and if statement to find freshman
for(x=0;x<j;x++)
{
 if(school[x].clas=="2")
 {
  //outputting data
  cout<<setw(10)<<school[x].name<<setw(8)<<school[x].number<<setw(8);
  cout<<school[x].clas<<setw(18)<<school[x].com<<setw(14)<<school[x].tak;
  cout<<setw(8)<<school[x].gpa;
 }
}


cout<<endl<<endl<<"JUNIOR"<<endl;
cout<<setw(10)<<"Name"<<setw(8)<<"Number"<<setw(8)<<"Class"<<setw(18)<<"Hours Completed";
cout<<setw(14)<<"Hours Taken"<<setw(8)<<"GPA"<<endl;

//for loop and if statement to find freshman
for(x=0;x<j;x++)
{
 if(school[x].clas=="3")
 {
  //outputting data
  cout<<setw(10)<<school[x].name<<setw(8)<<school[x].number<<setw(8);
  cout<<school[x].clas<<setw(18)<<school[x].com<<setw(14)<<school[x].tak;
  cout<<setw(8)<<school[x].gpa;
 }
}


cout<<endl<<endl<<"SENIOR"<<endl;
cout<<setw(10)<<"Name"<<setw(8)<<"Number"<<setw(8)<<"Class"<<setw(18)<<"Hours Completed";
cout<<setw(14)<<"Hours Taken"<<setw(8)<<"GPA"<<endl;

//for loop and if statement to find freshman
for(x=0;x<j;x++)
{
 if(school[x].clas=="4")
 {
  //outputting data
  cout<<setw(10)<<school[x].name<<setw(8)<<school[x].number<<setw(8);
  cout<<school[x].clas<<setw(18)<<school[x].com<<setw(14)<<school[x].tak;
  cout<<setw(8)<<school[x].gpa;
 }
}


cout<<endl<<endl<<"SPECIAL STUDENTS"<<endl;
cout<<setw(10)<<"Name"<<setw(8)<<"Number"<<setw(8)<<"Class"<<setw(18)<<"Hours Completed";
cout<<setw(14)<<"Hours Taken"<<setw(8)<<"GPA"<<endl;

//for loop and if statement to find freshman
for(x=0;x<j;x++)
{
 if(school[x].clas=="7")
 {
  //outputting data
  cout<<setw(10)<<school[x].name<<setw(8)<<school[x].number<<setw(8);
  cout<<school[x].clas<<setw(18)<<school[x].com<<setw(14)<<school[x].tak;
  cout<<setw(8)<<school[x].gpa;
 }
}
}