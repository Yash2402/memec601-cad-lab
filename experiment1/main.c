#include <SDL2_bgi.h>

int main()
{
    initwindow(640, 480);
    setbkcolor(WHITE);
    cleardevice();

    setcolor(BLUE);
    circle(320, 240, 100);

    getch();
    closegraph();
    return 0;
}
