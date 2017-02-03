//99 bottles of beer on the wall

#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <apstring.h>

void main(void)
{
clrscr();

int bottles=99;

apstring s="bottles";

while(bottles>0)
{
 cout<<bottles<<" "<<s<<" of beer on the wall.\n";
 delay(500);
 cout<<bottles<<" "<<s<<" of beer.\n";
 delay(500);
 cout<<"Take one down and pass it around.\n";
 delay(500);

 bottles--;
 if(bottles==1)
  s="bottle";

 if(bottles!=0)
  cout<<bottles<<" "<<s<<" of beer on the wall.\n\n";

 else
 {
  delay(1500);
  cout<<endl<<".....Uhhhh.....\n\n";
  delay(1000);
  cout<<"99 kegs of beer on the wall.....";
  delay(2000);
 }

 delay(2000);
 clrscr();
}

}