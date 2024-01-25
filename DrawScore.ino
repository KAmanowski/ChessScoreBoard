#include "_Colours.h"

extern void drawScore() {
  display.clearDisplay();
  int imageHeight = 32;
  int imageWidth = 64;
  int counter = 0;

  int x = 6;
  int y = 14;  
  int scoreFontSize = 2;
  
  draw_Six(x, y, BLUE, scoreFontSize, 1);
  draw_WeirdDashRight(x, y, WHITE, scoreFontSize, 3);
  draw_Two(x, y, WHITE, scoreFontSize, 5);
  draw_WeirdDashLeft(x, y, WHITE, scoreFontSize, 7);
  draw_One(x, y, RED, scoreFontSize, 8);
  draw_Six(x, y, RED, scoreFontSize, 9);

  int snp_x = 2;
  int snp_y = 4;
  
  draw_S(snp_x, snp_y, BLUE, 1, 1);
  draw_N(snp_x, snp_y, BLUE, 1, 2);
  draw_P(snp_x, snp_y, BLUE, 1, 3);

  int jlh_x = 48;
  int jlh_y = 4;
  
  draw_J(jlh_x, jlh_y, RED, 1, 1);
  draw_L(jlh_x, jlh_y, RED, 1, 2);
  draw_H(jlh_x, jlh_y, RED, 1, 3);

  // Last win dot
  //display.drawPixel(8, 28, BLUE);
  //display.drawPixel(32, 28, WHITE);
  display.drawPixel(55, 28, RED);
  
  delay(100);
}

extern void drawRochdaleMinLeft(int minLeft) {
  uint16_t colour;

  if (minLeft < 4) {
    colour = 0xff0000;
  }
}
