#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main(void)
{
clrscr();

int
 x=0,
 y;

cout<<"How many times do you want the sun to appear? ";
cin>>y;

for(x=0;x<y;x++)
{
int graphdriver = DETECT, graphmode;
initgraph(&graphdriver, &graphmode, "c:..\\bgi");
setbkcolor(BLACK);

setcolor(RED-YELLOW);
circle(325,250,5);
setfillstyle(SOLID_FILL, RED-YELLOW);
floodfill(325,250, RED-YELLOW);
delay(1000);

circle(325,250,10);
floodfill(331,250, RED-YELLOW);
delay(500);

circle(325,250,15);
floodfill(336,250, RED-YELLOW);
delay(500);

circle(325,250,20);
floodfill(341,250, RED-YELLOW);
delay(500);

circle(325,250,25);
floodfill(346,250, RED-YELLOW);
delay(500);

circle(325,250,30);
floodfill(351,250, RED-YELLOW);
delay(500);

circle(325,250,35);
floodfill(356,250, RED-YELLOW);
delay(500);

circle(325,250,40);
floodfill(361,250, RED-YELLOW);
delay(500);

circle(325,250,45);
floodfill(366,250, RED-YELLOW);

//start of top 2 flames
moveto(330,197);
lineto(339,200);
lineto(340,195);
lineto(341,190);
lineto(342,185);
lineto(341,180);
lineto(340,174);
lineto(338,168);
lineto(335,163);
lineto(328,171);
lineto(330,175);
lineto(332,180);
lineto(333,185);
lineto(332,190);
lineto(330,197);
floodfill(335,175, RED-YELLOW);

moveto(312,198);
lineto(320,196);
lineto(318,190);
lineto(317,185);
lineto(318,180);
lineto(320,175);
lineto(329,165);
lineto(338,155);
lineto(343,145);
lineto(345,135);
lineto(343,125);
lineto(335,115);
lineto(330,112);
lineto(325,110);
lineto(330,115);
lineto(336,125);
lineto(337,135);
lineto(333,145);
lineto(325,155);
lineto(315,165);
lineto(310,175);
lineto(308,180);
lineto(307,185);
lineto(308,190);
lineto(310,195);
lineto(312,198);
floodfill(315,175, RED-YELLOW);

moveto(318,158);
lineto(323,152);
lineto(321,146);
lineto(320,140);
lineto(320,135);
lineto(322,131);
lineto(323,127);
lineto(318,131);
lineto(315,135);
lineto(314,140);
lineto(313,146);
lineto(314,153);
lineto(318,158);
floodfill(316,150, RED-YELLOW);
//end of top 2 flames

floodfill(316,150, BLACK);
delay(1000);

//start of 2 right flames
moveto(378,255);
lineto(375,264);
lineto(380,265);
lineto(385,266);
lineto(390,267);
lineto(395,266);
lineto(401,265);
lineto(407,263);
lineto(412,260);
lineto(404,253);
lineto(400,255);
lineto(395,257);
lineto(390,258);
lineto(385,257);
lineto(378,255);
floodfill(385,260, RED-YELLOW);

moveto(377,237);
lineto(379,245);
lineto(385,243);
lineto(390,242);
lineto(395,243);
lineto(400,245);
lineto(410,254);
lineto(420,263);
lineto(430,268);
lineto(440,270);
lineto(450,268);
lineto(460,260);
lineto(463,255);
lineto(465,250);
lineto(460,255);
lineto(450,261);
lineto(440,262);
lineto(430,258);
lineto(420,250);
lineto(410,240);
lineto(400,235);
lineto(395,233);
lineto(390,232);
lineto(385,233);
lineto(380,235);
lineto(377,237);
floodfill(400,240, RED-YELLOW);

moveto(417,243);
lineto(423,248);
lineto(429,246);
lineto(435,245);
lineto(440,245);
lineto(444,247);
lineto(448,248);
lineto(444,243);
lineto(440,240);
lineto(435,239);
lineto(429,238);
lineto(422,239);
lineto(417,243);
floodfill(425,244, RED-YELLOW);
//end of 2 right flames

floodfill(425,244, BLACK);
delay(1000);

//start of 2 main bottom flames
moveto(320,303);
lineto(311,300);
lineto(310,305);
lineto(309,310);
lineto(308,315);
lineto(309,320);
lineto(310,326);
lineto(312,332);
lineto(315,337);
lineto(322,329);
lineto(320,325);
lineto(318,320);
lineto(317,315);
lineto(318,310);
lineto(320,303);
floodfill(311,315, RED-YELLOW);

moveto(338,302);
lineto(330,304);
lineto(332,310);
lineto(333,315);
lineto(332,320);
lineto(330,325);
lineto(321,335);
lineto(312,345);
lineto(307,355);
lineto(305,365);
lineto(307,375);
lineto(315,385);
lineto(320,388);
lineto(325,390);
lineto(320,385);
lineto(314,375);
lineto(313,365);
lineto(317,355);
lineto(325,345);
lineto(335,335);
lineto(340,325);
lineto(342,320);
lineto(343,315);
lineto(342,310);
lineto(340,305);
lineto(338,302);
floodfill(315,345, RED-YELLOW);

moveto(332,342);
lineto(327,348);
lineto(329,354);
lineto(330,360);
lineto(330,365);
lineto(328,369);
lineto(327,373);
lineto(332,369);
lineto(335,365);
lineto(336,360);
lineto(337,354);
lineto(336,347);
lineto(332,342);
floodfill(330,350, RED-YELLOW);
//end of bottom flames

floodfill(330,350, BLACK);
delay(1000);

//start of 2 left flames
moveto(272,245);
lineto(275,238);
lineto(270,235);
lineto(265,234);
lineto(260,233);
lineto(255,234);
lineto(249,235);
lineto(243,237);
lineto(238,240);
lineto(246,247);
lineto(250,245);
lineto(255,243);
lineto(260,242);
lineto(265,243);
lineto(272,245);
floodfill(250,240, RED-YELLOW);

moveto(273,263);
lineto(271,255);
lineto(265,257);
lineto(260,258);
lineto(255,257);
lineto(250,255);
lineto(240,246);
lineto(230,237);
lineto(220,232);
lineto(210,230);
lineto(200,232);
lineto(190,240);
lineto(187,245);
lineto(185,250);
lineto(190,245);
lineto(200,239);
lineto(210,238);
lineto(220,242);
lineto(230,250);
lineto(240,260);
lineto(250,265);
lineto(255,267);
lineto(260,268);
lineto(265,267);
lineto(270,265);
lineto(273,263);
floodfill(255,260, RED-YELLOW);

moveto(233,257);
lineto(227,252);
lineto(221,254);
lineto(215,255);
lineto(210,255);
lineto(206,253);
lineto(202,252);
lineto(206,257);
lineto(210,260);
lineto(215,261);
lineto(221,262);
lineto(228,261);
lineto(233,257);
floodfill(215,258, RED-YELLOW);
//end of 2 final (left) flames
delay(1000);

if(x==y)
{
getch();
}
}

closegraph();
}