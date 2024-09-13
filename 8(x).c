// Program illustrating the use of fillellipse function:
#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    fillellipse(100, 100, 50, 25);
    getch();
    closegraph();
    return 0;
}
