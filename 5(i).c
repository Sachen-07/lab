/*: Using certain graphic functions available in C-language for drawing lines, rectangles & circles, Write a CProgram which generates pixel activation list for drawing the following simple two dimensional objects
(Circle, Ellipse…..).
i) House */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(5);
rectangle(60,80,150,200);
rectangle(95,140,120,200);
line(60,80,100,15);
line(100,15,150,80);
circle(100,60,10);
getch();
closegraph();
}