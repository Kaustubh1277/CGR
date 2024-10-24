//practical no 5
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

void floodFill(int x, int y, int oldColor, int newColor) {
    int currentColor = getpixel(x, y);
    if (currentColor == oldColor) {
        // Set the new color at the current pixel
        putpixel(x, y, newColor);
        floodFill(x + 1, y, oldColor, newColor);  // Right
        floodFill(x - 1, y, oldColor, newColor);  // Left
        floodFill(x, y + 1, oldColor, newColor);  // Down
        floodFill(x, y - 1, oldColor, newColor);  // Up
    }
}

int main() {
    int gd = DETECT, gm;
     int poly[] = {150, 100, 200, 200, 100, 200, 150, 100};
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    drawpoly(4, poly);
    floodFill(150, 150, BLACK,YELLOW);
    getch(); 
    closegraph();  
    return 0;
}
