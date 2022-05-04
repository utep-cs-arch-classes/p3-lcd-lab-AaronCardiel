#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "shapes.h"


void drawSaxophone(int col, int row){
//     Left side of sax
    fillRectangle(col, row, 1, 5, COLOR_YELLOW);
    fillRectangle(col - 1, row - 2, 1, 5, COLOR_YELLOW);
    fillRectangle(col - 2, row - 4, 1, 5, COLOR_YELLOW);
    fillRectangle(col - 3, row - 6, 1, 5, COLOR_YELLOW);
    fillRectangle(col - 4, row - 8, 1, 4, COLOR_YELLOW);
    fillRectangle(col - 5, row - 10, 1, 2, COLOR_YELLOW);
    fillRectangle(col - 6, row - 10, 1, 2, COLOR_YELLOW);
    fillRectangle(col - 7, row - 9, 1, 2, COLOR_BLACK);
    fillRectangle(col - 8, row - 8, 1, 2, COLOR_BLACK);
    fillRectangle(col - 9, row - 7, 1, 1, COLOR_BLACK);
    
// right side
    fillRectangle(col + 1, row + 2, 1, 5, COLOR_YELLOW);
    fillRectangle(col + 2, row + 4, 1, 5, COLOR_YELLOW);
    fillRectangle(col + 3, row + 5, 1, 4, COLOR_YELLOW);
    fillRectangle(col + 4, row + 1, 5, 8, COLOR_YELLOW);
    fillRectangle(col + 3, row + 1, 7, 1, COLOR_YELLOW);
    fillRectangle(col + 5, row + 2, 3, 1, COLOR_BLACK);
    
}

void drawMoon(int col, int row){
  int x_coord = col;
  int y_coord = row;
  int r = 10;
  // first point will be the very top;
  int x_point = 0;
  int y_point = r;
  int decision = 3 - (2 * r);

  u_int color = COLOR_GRAY;

  drawLines(x_coord, y_coord, x_point, y_point, color);

  while (y_point >= x_point) {
    // move x over one
    x_point++;

    // check decision point
    if (decision > 0) {
      // move y down one
      y_point--;
      decision = decision + 4 * (x_point - y_point) + 10;
    } else {
      decision = decision + 4 * x_point + 6;
    }
    drawLines(x_coord, y_coord, x_point, y_point, color);
  }
  
  fillRectangle(col, row, 1, 2, COLOR_BLACK);
  fillRectangle(col + 4, row + 2, 1, 2, COLOR_BLACK);
  fillRectangle(col - 1, row - 3, 1, 1, COLOR_BLACK);
  fillRectangle(col - 3, row - 5, 2, 2, COLOR_BLACK);
  fillRectangle(col - 3, row + 5, 2, 2, COLOR_BLACK);
  fillRectangle(col + 6, row - 5, 2, 3, COLOR_BLACK);
}

void drawBunny(int col, int row){
    fillRectangle(col - 4, row - 2, 10, 6, COLOR_WHITE);
    fillRectangle(col - 3, row - 9, 2, 7, COLOR_WHITE);
    fillRectangle(col + 3, row - 9, 2, 7, COLOR_WHITE);
    fillRectangle(col - 1, row - 3, 4, 1, COLOR_WHITE);
    fillRectangle(col - 4, row + 4, 8, 1, COLOR_WHITE);
    
    fillRectangle(col, row, 1, 3, COLOR_BLACK);
    fillRectangle(col + 4, row, 1, 3, COLOR_BLACK);
    
    fillRectangle(col - 2, row - 7, 1, 4, COLOR_PINK);
    fillRectangle(col + 4, row - 7, 1, 4, COLOR_PINK);
    fillRectangle(col + 2, row + 3, 1, 1, COLOR_PINK);
}

void drawHand(int col, int row){
    fillRectangle(col + 3, row, 4, 1, COLOR_BEIGE);
    fillRectangle(col, row - 2, 7, 2, COLOR_BEIGE);
    fillRectangle(col - 5, row + 1, 12, 1, COLOR_BEIGE);
    fillRectangle(col - 4, row + 2, 10, 2, COLOR_BEIGE);
    fillRectangle(col - 3, row + 4, 8, 1, COLOR_BEIGE);
    
    fillRectangle(col - 5, row, 5, 1, COLOR_BEIGE);
    fillRectangle(col - 5, row - 1, 4, 1, COLOR_BEIGE);
    fillRectangle(col - 5, row - 2, 3, 1, COLOR_BEIGE);
    fillRectangle(col - 5, row - 11, 2, 9, COLOR_BEIGE);
    
    fillRectangle(col - 2, row - 6, 2, 4, COLOR_BEIGE);
    fillRectangle(col + 1, row - 6, 2, 3, COLOR_BEIGE);
    fillRectangle(col + 4, row - 11, 2, 8, COLOR_BEIGE);
}

void
drawLines(u_int x_coord, u_int y_coord, u_int x_point, u_int y_point, u_int color)
{
  // bottom
  drawHorizontalLine(x_coord - x_point, x_coord + x_point, y_coord + y_point, color);
  // top
  drawHorizontalLine(x_coord - x_point, x_coord + x_point, y_coord - y_point, color);
  // and the middle two
  drawHorizontalLine(x_coord - y_point, x_coord + y_point, y_coord + x_point, color);
  drawHorizontalLine(x_coord - y_point, x_coord + y_point, y_coord - x_point, color);
					  
}

void
drawHorizontalLine(u_int x_start, u_int x_end, u_int y, u_int colorBGR)
{
  u_int length = x_end - x_start;
  // set the draw area from the start of the line to the end
  // height is 1 since its a line
  lcd_setArea(x_start, y, x_end, y);
  for (u_int i = 0; i < length; i++) {
    lcd_writeColor(colorBGR);
  }
  
}

void clearShape(int color){
    fillRectangle(0, 60, 128, 40, color);
}
