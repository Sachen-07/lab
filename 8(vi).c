//Program illustrating the use of Fillpoly function:
#include <graphics.h>
#include <conio.h>
main()
{
int gd=DETECT,gm,points[]={100,200,120,230,150,260,120,290,100,330,80,290,50,260,80,230,100,200};
initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
setfillstyle(SOLID_FILL,10);
fillpoly(9, points); 
with color defined in setfillstyle function.
getch();
closegraph();
return 0;
}