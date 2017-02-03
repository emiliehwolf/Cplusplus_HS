//Emilie Helen Eggleston
//September 10, 2001
//Magic Square

#include <iostream.h>
#include <conio.h>


void main(void)
{
clrscr();

int
 x=0,
 sum1=0,   //identifiers
 sum2=0,
 y=0;

int magic [3] [3];

char
 yn;

do
{
clrscr();
cout<<"Input 16 numbers:\n";

//for loop to input the numbers
for(x=0;x<4;x++)
{
 for(y=0;y<4;y++)
 {
  cin>>magic[x][y];
 }
}

//for loop to output the square
for(x=0;x<4;x++)
{
 for(y=0;y<4;y++)
 {
  cout<<"\t"<<magic[x][y];
 }
 cout<<endl<<endl;
}

//sum1 is the initial sum to compare to all the other sums
sum1=magic[0][0]+magic[0][1]+magic[0][2]+magic[0][3];
sum2=magic[1][0]+magic[1][1]+magic[1][2]+magic[1][3];


//Many, many, many if statements to check each sum
if(sum2==sum1)
{
 sum2=magic[2][0]+magic[2][1]+magic[2][2]+magic[2][3];

 if(sum2==sum1)
 {
  sum2=magic[3][0]+magic[3][1]+magic[3][2]+magic[3][3];

  if(sum2==sum1)
  {
   sum2=magic[0][0]+magic[1][0]+magic[2][0]+magic[3][0];

   if(sum2==sum1)
   {
    sum2=magic[0][1]+magic[1][1]+magic[2][1]+magic[3][1];

    if(sum2==sum1)
    {
     sum2=magic[0][2]+magic[1][2]+magic[2][2]+magic[3][2];

     if(sum2==sum1)
     {
      sum2=magic[0][3]+magic[1][3]+magic[2][3]+magic[3][3];

      if(sum2==sum1)
      {
       sum2=magic[0][0]+magic[1][1]+magic[2][2]+magic[3][3];

       if(sum2==sum1)
       {
	sum2=magic[0][3]+magic[1][2]+magic[2][1]+magic[3][0];

	if(sum2==sum1)
	{
	 //Once all the sums are equal to each other, this is the output
	 cout<<"Congratulations! You have a perfect square!\n\n";
	}

	//And many, many, many else statements for when it's not perfect
	else
	 cout<<"Sorry, it's not a perfect square.\n\n";

       }
       else
	cout<<"Sorry, it's not a perfect square.\n\n";

      }
      else
       cout<<"Sorry, it's not a perfect square.\n\n";

     }
     else
      cout<<"Sorry, it's not a perfect square.\n\n";

    }
    else
     cout<<"Sorry, it's not a perfect square.\n\n";

   }
   else
    cout<<"Sorry, it's not a perfect square.\n\n";

  }
  else
   cout<<"Sorry, it's not a perfect square.\n\n";

 }
 else
  cout<<"Sorry, it's not a perfect square.\n\n";

}
else
 cout<<"Sorry, it's not a perfect square.\n\n";


cout<<endl<<"Would you like to run the program again? (y/n) ";
cin>>yn;

}
while(yn=='Y'||yn=='y');

//end of program
}