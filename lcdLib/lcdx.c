/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  // u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);

  // generate a triangle

  for (int i = 0; i < 15; i++) {

    drawPixel(0, i, COLOR_WHITE);
    drawPixel(i, i, COLOR_WHITE);
    drawPixel(i, 15, COLOR_WHITE);

  }
  
}
