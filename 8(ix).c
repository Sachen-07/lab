// Program illustrating the use of setcolor function:

#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    circle(100, 100, 50); /* drawn in white color */
    setcolor(GREEN);
    circle(200, 200, 50); /* drawn in green color */
    getch();
    closegraph();
}
