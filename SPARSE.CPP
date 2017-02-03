//Emilie Eggleston
//September 19, 2001
//Sparse Matrix (2-dimensional arrays)

#include <conio.h>
#include <iostream.h>
#include <fstream.h>
#include <stdio.h>

void main(void)
{
clrscr();

int
 k=0,    //identifiers    (only 2!!!)
 j=0;

//structure
struct sparse
{
 float
  element;
};

//2-D array
sparse matrix [3] [5];
ifstream input ("A:numbers.txt",ios::in);

//inputting the data from the text file into the the 2-D array
while (!input.eof())
{
 for(k=0;k<3;k++)
 {
  for(j=0;j<5;j++)
  {
   input>>matrix[k][j].element;
  }
 }
}
cout<<endl;

//outputting the pretty table
for(k=0;k<3;k++)
{
 for(j=0;j<5;j++)
 {
  printf("\t%5.1f",matrix[k][j].element);
 }
 cout<<endl;
}

//checking for non-zero numbers
for(k=0;k<3;k++)
{
 for(j=0;j<5;j++)
 {
  if(matrix[k][j].element!=0)
  {
   printf("\n(%d %d) %5.1f",k+1,j+1,matrix[k][j].element);
  }
 }
}

//the end
}
