//Emilie Eggleston
//Aug 31, 2001
//Children's multiplication

#include <iostream.h>
#include <conio.h>
#include <time.h>
#include <dos.h>
#include <stdio.h>
#include <stdlib.h>

const
 int LOW=0;

const
 int HIGH=9;

void rng (int l, int h, int &num);

void main(void)
{

int
 low=1,
 high=4,
 number=0,
 num1=0,
 num2=0,    //identifiers
 ans=0,
 child_ans=0,
 wrong=0,
 check=0,
 x=1;

//for loop to run though 10 problems
for(x=1;x<=10;x++)
{
 time_t seconds;                 //this is
				 //a random
 time(&seconds);                 //number
 srand((unsigned int) seconds);  //generator
 num1=rand()%(HIGH-LOW+1)+LOW;
 num2=rand()%(HIGH-LOW+1)+LOW;

 //finding the correct answer
 ans=num1*num2;

 //do while loop to repeat problems with wrong answers
 do
 {
  check=0;
  clrscr();

  //outputting problem number and the number problem ;-)
  cout<<endl<<endl<<x<<".\t   "<<num1<<endl;
  cout<<"\t x "<<num2<<endl<<"\t----"<<endl<<"\t  ";
  //inputting the child's answer
  cin>>child_ans;

  //output to encourage the child when the problem is answered correctly
  if(child_ans==ans)
   {
    //calling fuction rng (Random Number Generator)
    rng (low,high,number);

    switch (number)
    {
     case 1: cout<<endl<<endl<<"**************"<<endl<<"* Very good! *";
	     cout<<endl<<"**************";
	     break;
     case 2: cout<<endl<<endl<<"**************"<<endl<<"* Excellent! *";
	     cout<<endl<<"**************";
	     break;
     case 3: cout<<endl<<endl<<"**************"<<endl<<"* Nice work! *";
	     cout<<endl<<"**************";
	     break;
     case 4: cout<<endl<<endl<<"**************************"<<endl<<"* Keep ";
	     cout<<"up the good work! *"<<endl<<"**************************";
	     break;
    }
   }

  //output to make the child feel bad for a wrong answer... Bwa ha ha!
  else
  {
   //calling fuction rng (Random Number Generator)
   rng (low,high,number);

    switch (number)
    {
     case 1: cout<<endl<<endl<<"*************************"<<endl<<"* No. Please try again. *";
	     cout<<endl<<"*************************";
	     break;
     case 2: cout<<endl<<endl<<"*************************"<<endl<<"* Wrong. Try once more. *";
	     cout<<endl<<"*************************";
	     break;
     case 3: cout<<endl<<endl<<"******************"<<endl<<"* Don't give up! *";
	     cout<<endl<<"******************";
	     break;
     case 4: cout<<endl<<endl<<"********************"<<endl<<"* No. ";
	     cout<<"keep trying. *"<<endl<<"********************";
	     break;
    }

  }

  if(check==1)
  {
   wrong++;
  }
  check++;
  //a 3 second delay so you can see the message before the next problem
  delay(3000);
 }
 while(child_ans!=ans);

}
clrscr();
cout<<"You got "<<(10-wrong)*10<<"% of your answers correct.";

delay(1000);
if((10-wrong)*10<70)
{
 cout<<endl<<endl<<"Please ask your teacher for extra help.";
}
delay(3000);

//end of main program
}

void rng (int l, int h, int &num)
{
 time_t seconds;                 //this is
				 //a random
 time(&seconds);                 //number
 srand((unsigned int) seconds);  //generator
 num=rand()%(h-l+1)+l;
}
