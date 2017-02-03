//Emilie Eggleston
//9-21-00
/*Mile Run: this program will take a combined time of min, sec, and hundredths,
and change it into split times*/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
clrscr();

int
 num,
 m1,       //a lot of identifiers are needed for this program
 s1,
 h1,
 m2,
 s2,
 h2,
 m3,
 s3,
 h3,
 ftm,  //These are needed to keep the finishing time from changing
 fts,
 fth;

//Collecting input for each time in min, sec, and hundredths
cout<<"What is your runner number? ";
cin>>num;

cout<<"How many minutes, seconds, and hundredths did it take the first mile? ";
cin>>m1>>s1>>h1;

cout<<"How many min, sec, and hundredths did it take on the second mile? ";
cin>>m2>>s2>>h2;

cout<<"And what was your finishing time in min, sec, and hundredths? ";
cin>>m3>>s3>>h3;

//Formulas
ftm=m3;
fts=s3;
fth=h3;
h3=h3-h2;
h2=h2-h1;
s3=(m3*60+s3)-(m2*60+s2);
m3=s3/60;
s3=s3%60;
s2=(m2*60+s2)-(m1*60+s1);
m2=s2/60;
s2=s2%60;

//Final Output
cout<<"Runner number\t"<<num;
cout<<"\nSplit one\t"<<m1<<":"<<s1<<"."<<h1;
cout<<"\nSplit two\t"<<m2<<":"<<s2<<"."<<h2;
cout<<"\nSplit three\t"<<m3<<":"<<s3<<"."<<h3;
cout<<"\nFinish time\t"<<ftm<<":"<<fts<<"."<<fth;

return 0;
}