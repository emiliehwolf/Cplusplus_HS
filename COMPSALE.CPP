//Emilie Eggleston
//9-18-00
//Computer Sales
//Finds total cost for computer items

#include <iostream.h>
#include <stdio.h>
#include <conio.h>
int main(void)
{
clrscr();
int    //here are my identifiers
 mc,
 dd,    //These are just integers
 sw;

float
 totcost,
 cost1,       //but these have decimals
 cost2,       //they must be float
 cost3;

//Assingning memory cards, disk drives, and software
cout<<"How many memory cards are you purchasing today? ";
cin>>mc;

cout<<"\nHow many disk drives are you getting? ";
cin>>dd;

cout<<"\nHow many softwares are you buying? ";
cin>>sw;

//Formulas
cost1=mc*69.95;
cost2=dd*198.50;
cost3=sw*34.98;
totcost=cost1+cost2+cost3+675.00;

//final output
cout<<"\n******************************\n\n";
cout<<"   New Wave Computers\n\n\n";
cout<<"   ITEM         COST\n";
cout<<"1  NW-PC        $675.00\n";
printf("%d  Memory card  $%5.2f\n",mc,cost1);
printf("%d  Disk Drive   $%5.2f\n",dd,cost2);
printf("%d  Software     $%5.2f\n",sw,cost3);
printf("\nTOTAL           $%6.2f",totcost);

return 0;
}