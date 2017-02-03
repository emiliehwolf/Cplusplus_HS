//Emilie Eggleston
//3-21-01
//IRS Income Tax

#include <iostream.h>
#include <conio.h>
#include <apstring.h>
#include <stdio.h>
#include <fstream.h>

void main(void)
{
clrscr();

int
 x=0,
 count=0,
 j=0;

struct names
{
 apstring last,
	  first;
 float num;
};

names income[50];
ifstream input ("A:INCOME.txt", ios::in);

while (!input.eof())
{
 input>>income[j].last;
 input>>income[j].first;
 input>>income[j].num;
j++;
}
j--;

for(x=0;x<j;x++)
{

 if(income[x].last==income[x+1].last)
 {
  income[x].num==income[x+1].num+income[x].num;
  count++;
 }


}

}