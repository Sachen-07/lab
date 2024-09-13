/*Using Midpoint ellipse generation algorithm which is a variant of Bresenham's line algorithm,
 write a CProgram to generate pixel activation list for drawing a ellipse?*/

 #include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void disp();
float x,y;
int xc,yc;
void main()
{
int gd=DETECT,gm;
int rx,ry;
float p1,p2;
clrscr();
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
printf("Enter the center point :");
scanf("%d,%d",&xc,&yc);
printf("Enter the value for Rx and Ry :");
scanf("%d,%d",&rx,&ry);
x=0;
y=ry;
disp();
p1=(ry*ry)-(rx*rx*ry)+(rx*rx)/4;
while((2.0*ry*ry*x)<=(2.0*rx*rx*y))
{
x++;
if(p1<=0)
p1=p1+(2.0*ry*ry*x)+(ry*ry);
}
x=rx;
y=0;
disp();
else
{
}
disp();
x=-x;
disp();
x=-x;
y--;
p1=p1+(2.0*ry*ry*x)-(2.0*rx*rx*y)+(ry*ry);
p2=(rx*rx)+2.0*(ry*ry*rx)+(ry*ry)/4;
while((2.0*ry*ry*x)>(2.0*rx*rx*y))
{
y++;
if(p2>0)
else
{
p2=p2+(rx*rx)-(2.0*rx*rx*y);
x--;
14
}
getch();
}
disp();
y=-y;
disp();
y=-y;
p2=p2+(2.0*ry*ry*x)-(2.0*rx*rx*y)+(rx*rx);
closegraph();
}
void disp()
{
delay(50);
putpixel(xc+x,yc+y,10);
putpixel(xc-x,yc+y,10);
putpixel(xc+x,yc-y,10);
putpixel(xc-x,yc-y,10);
}
