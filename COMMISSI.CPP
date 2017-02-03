//Emilie Eggleston
//January 8, 2001 - January 11, 2001
//Wellsville Wholesale Company

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <fstream.h>
#include <apstring.h>
#include <iomanip.h>

//a global structure
struct company
{
 apstring
  first,
  last;

 float
  amount,
  total,
  rate;
};

//function
void selection_sort (company ARRAY[]);

//beginning of main program
void main(void)
{
clrscr();

int
 k=0,
 x=0;   //identifiers
float
 top=0,
 avg=0;

//inputting data into array
company array [11];
ifstream input("A:sales.txt",ios::in);
while(!input.eof())
{
 input>>array[x].first;
 input>>array[x].last;
 input>>array[x].amount;

//several if statements to find rate
 if(array[x].amount>=0 && array[x].amount<1001)
  array[x].rate=.03;

 if(array[x].amount>=1001 && array[x].amount<5001)
  array[x].rate=.045;

 if(array[x].amount>=5001 && array[x].amount<10001)
  array[x].rate=.0525;

 if(array[x].amount>=10001)
  array[x].rate=.06;

 //finding total earned (before bonuses)
 array[x].total=array[x].amount*array[x].rate;

 //finding top salesperson
 if(array[x].total>top)
 {
  top=array[x].total;
  k=x;
 }

 //finding average
 avg=avg+array[x].amount;
 x++;
}

//adding $75 bonus to top salesperson
array[k].total=array[k].total+75;

//finishing finding average
avg=avg/10;

//calling function to sort last names
selection_sort(array);

//output for table
cout<<"Salesperson"<<setw(20)<<"Sales"<<setw(20)<<"Commission";
cout<<setw(20)<<"Total Earned\n";
cout<<"---------------------------------------------------------------------\n";

//for loop to output each person and sales in neat table
for(x=0;x<10;x++)
{
 cout<<setw(16)<<array[x].last+", "+array[x].first<<"\t";
 printf("$%9.2f\t",array[x].amount);

 printf("%8.4f\t",array[x].rate);

 //if statement to add $50 bonus to salespersons exceeding average sales
 if(array[x].amount>avg)
  array[x].total=array[x].total+50;

 printf("$%8.2f\n",array[x].total);
}

//outputting average sales and funny message
printf("\n\nAverage Sales: $%6.2f\n",avg);
getch();
cout<<"Note:  All bonuses have already been added to total earnings.";
getch();

x=0;
k=500;
cout<<"                                                                            ";
while(x<500&&k>0)
{
 cout<<setw(x)<<"Happy Happy!\n";
 cout<<setw(k)<<"Joy Joy!\n";
 k--;
 x++;
}
getch();

//end of main program
}

//function to sort by last name
void selection_sort (company ARRAY[])
{
 int
  j,
  k,
  small;

 apstring
  temp1,
  temp2;

 float
  temp3,
  temp4,
  temp5;

 for(j=9; j>0; j--)
 {
  small=0;

  for(k=1; k<=j; k++)
  {
   if(ARRAY[k].last>ARRAY[small].last)
     small=k;
  }
 temp1=ARRAY[small].last;
 temp2=ARRAY[small].first;
 temp3=ARRAY[small].amount;
 temp4=ARRAY[small].rate;
 temp5=ARRAY[small].total;

 ARRAY[small].last=ARRAY[j].last;
 ARRAY[small].first=ARRAY[j].first;
 ARRAY[small].amount=ARRAY[j].amount;
 ARRAY[small].rate=ARRAY[j].rate;
 ARRAY[small].total=ARRAY[j].total;

 ARRAY[j].last=temp1;
 ARRAY[j].first=temp2;
 ARRAY[j].amount=temp3;
 ARRAY[j].rate=temp4;
 ARRAY[j].total=temp5;

 }
}
