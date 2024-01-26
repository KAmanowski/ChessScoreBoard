#include "_Colours.h"

extern void drawScore() {
  display.clearDisplay();
  int imageHeight = 32;
  int imageWidth = 64;
  int counter = 0;

  int x = 6;
  int y = 14;  
  int scoreFontSize = 2;
  
  draw_Six(x, y, ORANGE, scoreFontSize, 1);
  draw_WeirdDashRight(x, y, WHITE, scoreFontSize, 3);
  draw_Two(x, y, WHITE, scoreFontSize, 5);
  draw_WeirdDashLeft(x, y, WHITE, scoreFontSize, 7);
  draw_One(x, y, RED, scoreFontSize, 8);
  draw_Six(x, y, RED, scoreFontSize, 9);

  int snp_x = 2;
  int snp_y = 4;
  
  draw_S(snp_x, snp_y, ORANGE, 1, 1);
  draw_N(snp_x, snp_y, ORANGE, 1, 2);
  draw_P(snp_x, snp_y, ORANGE, 1, 3);

  int jlh_x = 48;
  int jlh_y = 4;
  
  draw_J(jlh_x, jlh_y, RED, 1, 1);
  draw_L(jlh_x, jlh_y, RED, 1, 2);
  draw_H(jlh_x, jlh_y, RED, 1, 3);

  int round_x = 24;
  int round_y = 5;

  draw_R(round_x, round_y, WHITE, 0, 1);
  display.drawPixel(round_x + 4, round_y + 1, WHITE);
  display.drawPixel(round_x + 4, round_y + 3, WHITE);
  draw_Two(round_x, round_y, DARK_GREEN, 0, 3);
  draw_Five(round_x, round_y, DARK_GREEN, 0, 4);

  // Last win dot
  //display.drawPixel(8, 28, YELLOW);
  //display.drawPixel(32, 28, WHITE);
  display.drawPixel(55, 25, RED);

  // last wins

  drawHorizontalLine(23, 28, 2, ORANGE);
  drawHorizontalLine(23, 29, 2, ORANGE);

  drawHorizontalLine(27, 28, 2, RED);
  drawHorizontalLine(27, 29, 2, RED);

  drawHorizontalLine(31, 28, 2, ORANGE);
  drawHorizontalLine(31, 29, 2, ORANGE);
  
  drawHorizontalLine(35, 28, 2, RED);
  drawHorizontalLine(35, 29, 2, RED);

  drawHorizontalLine(39, 28, 2, RED);
  drawHorizontalLine(39, 29, 2, RED);

  delay(100);
}

extern void drawRochdaleMinLeft(int minLeft) {
  uint16_t colour;

  if (minLeft < 4) {
    colour = 0xff0000;
  }
}
