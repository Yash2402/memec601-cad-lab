#include <SDL2_bgi.h>
#include <stdio.h>

int main() {
    // this initialise the graphics mode and create a screen with the given width, height and title
    initwindow(1024, 680, "Experiment 1 - Basic Graphics Functions");

    // this puts a single pixel at the specified coordinates (x, y) with the given color
    putpixel(50, 50, RED);

    // this sets the current drawing color to WHITE and draws a line from (100, 50) to (300, 50)
    setcolor(WHITE);
    line(100, 50, 300, 50);

    // this moves the current position to (100, 100) and draws a line to (300, 100)
    moveto(100, 100);
    lineto(300, 100);

    // this moves the current position to (100, 150) and draws a line relative to the current position (200, 0)
    // so it will draw a line from (100, 150) to (300, 150)
    // 200 is the horizontal distance and 0 is the vertical distance from the current position
    moveto(100, 150);
    linerel(200, 0);

    // this sets the current drawing color to CYAN 
    // draws a rectangle with the top-left corner at (100, 200) 
    // the bottom-right corner at (300, 320)
    setcolor(CYAN);
    rectangle(100, 200, 300, 320);

    // this sets the current drawing color to YELLOW 
    // draws a circle with the center at (500, 150) and a radius of 80
    setcolor(YELLOW);
    circle(500, 150, 80);

    // this sets the current drawing color to GREEN 
    // draws an arc with the center at (500, 320), starting angle of 
    // 0 degrees, ending angle of 180 degrees, and a radius of 60
    // the arc will be a half-circle opening downwards, 
    // starting from the rightmost point (0 degrees) 
    // to the leftmost point (180 degrees)     
    setcolor(GREEN);
    arc(500, 320, 0, 180, 60);

    // this will draw a pie slice at (200, 450) with a radius of 70, starting from 0 degrees to 120 degrees
    // the pie slice will be filled with RED color and outlined with WHITE color
    // the 0 degrees is the rightmost point of the circle, and the angles increase counterclockwise
    // so the 120 degrees will be the point that is 120 degrees counterclockwise from the rightmost point,
    // which will be in the upper-left quadrant of the circle
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, RED);
    pieslice(200, 450, 0, 120, 70);

    // this will draw an ellipse C(500, 470), a = 100 (horizontal), and b = 50 (vertical)
    // the ellipse will be outlined with MAGENTA color and not filled
    setcolor(MAGENTA);
    ellipse(500, 470, 0, 360, 100, 50);

    // this will draw a filled ellipse C(800, 150), a = 90, and b = 50
    // the ellipse will be filled with CYAN color and outlined with CYAN color
    setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
    fillellipse(800, 150, 90, 50);

    // this will draw a filled sector C(800, 320), radius of 80,
    // starting angle of 0 degrees, and ending angle of 180 degrees
    // the sector will be a half-circle opening downwards, starting from the rightmost point (0 degrees)
    // the sector will be filled with YELLOW color and outlined with YELLOW color
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    sector(800, 320, 0, 180, 80, 50);

    // this will draw a rectangle: top-left - (700, 400)
    //                             bottom-right - (900, 540)
    // filled with GREEN color and outlined with WHITE color
    setcolor(WHITE);
    rectangle(700, 400, 900, 540);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(800, 470, WHITE);

    // this will display text on the screen at (10, 640) with the current color (WHITE)
    char buf[50];
    sprintf(buf, "Current color: %d  Pixel at 50,50: %d", getcolor(), getpixel(50, 50));
    setcolor(WHITE);
    outtextxy(10, 640, buf);

    // this will wait for a key press before closing the graphics window
    // it allows the user to see the drawn graphics before the window closes
    // without this, the window would open and close immediately, not giving the user a chance to see the output
    getch();

    // this will close the graphics window and clean up any resources used by the graphics system
    closegraph();
    return 0;
}
