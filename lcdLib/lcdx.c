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

  //Draw a triangle

  for (int i = 0; i < 40; i++)
    {
    drawPixel(0, i, COLOR_WHITE);
    drawPixel((i/2), 40, COLOR_WHITE);
    drawPixel((i/2), i, COLOR_WHITE);
    }
  
for (int j=0; j<=10; j++) {
  for(int k=0; k <=10+j; k++){
    drawPixel((20-k),j, COLOR_WHITE);
    drawPixel((20+k),j, COLOR_WHITE);
  }
 }

}
