//Emilie Eggleston
//10-18-01
//Sorting Test Scores

#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <stdio.h>

//functions for sorting
void sort_up (int SCORES[150], int size);
void sort_down (int SCORES[150], int size);

void main(void)
{
clrscr();

int
 x=0,
 high=0,
 low=0,    //identifiers
 y=0;

float
 avg=0;

//array
int scores[150];

//inputting text file into array
ifstream input("A:scores.txt",ios::in);
while(!input.eof())
{
 input>>scores[x];
 x++;
}
x--;

//outputting original scores
cout<<"The original scores:\n";
for(y=0;y<x;y++)
{
 cout<<scores[y];

 //putting commas after all grades except last one
 if (y!=(x-1))
  cout<<", ";

 //ending line after 15 grades
 if ((y+1)%15==0)
  cout<<endl;
}
cout<<endl<<endl;

//calling function to sort in descending
sort_down(scores,x);

//outputting scores in descending order
cout<<"Scores sorted from high to low:\n";
for(y=0;y<x;y++)
{
  cout<<scores[y];

 if (y!=(x-1))
  cout<<", ";

 if ((y+1)%15==0)
  cout<<endl;
}
cout<<endl<<endl;

//calling function for sorting in ascending order
sort_up(scores,x);

//outputting scores in ascending order
cout<<"Scores sorted from low to high:\n";
for(y=0;y<x;y++)
{
 cout<<scores[y];

 if (y!=(x-1))
  cout<<", ";

 if ((y+1)%15==0)
  cout<<endl;

//if statement to find lowest grade
 if(low>scores[y])
  low=scores[y];

//if statement to find highest grade
 if(high<scores[y])
  high=scores[y];

//finding total of scores
 avg=avg+scores[y];
}

//finding average of scores
avg=avg/x;

//final output
cout<<endl<<endl<<"The highest score is: "<<high<<endl;
cout<<"The lowest score is: "<<low<<endl;
printf("The average score is: %3.2f",avg);

}


//descending
void sort_down (int SCORES[150], int size)
{
 int
  j,
  k,
  small,
  temp;

 for(j=(size-1); j>0; j--)
 {
  small=0;

  for(k=1; k<=j; k++)
  {
   if(SCORES[k]<SCORES[small])
     small=k;
  }
 temp=SCORES[small];
 SCORES[small]=SCORES[j];
 SCORES[j]=temp;
 }
}

//ascending
void sort_up (int SCORES[150], int size)
{
 int
  j,
  k,
  small,
  temp;

 for(j=(size-1); j>0; j--)
 {
  small=0;

  for(k=1; k<=j; k++)
  {
   if(SCORES[k]>SCORES[small])
     small=k;
  }
 temp=SCORES[small];
 SCORES[small]=SCORES[j];
 SCORES[j]=temp;
 }
}