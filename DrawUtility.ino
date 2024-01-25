void drawHorizontalLine(int x, int y, int length, uint16_t color) {
  for (int xx = x; xx < x + length; xx++)
  {
      display.drawPixel(xx , y, color);
  }
}

void drawVerticalLine(int x, int y, int length, uint16_t color) {
  for (int yy = y; yy < y + length; yy++)
  {
      display.drawPixel(x , yy, color);
  }
}

void drawLeftDiagonalLine(int x, int y, int length, uint16_t color) {
  int yy = y;
  for (int xx = x; xx < x + length; xx++) {
      display.drawPixel(xx, yy, color);
      yy++;
  }
}

void drawRightDiagonalLine(int x, int y, int length, uint16_t color) {
  int yy = y;
  for (int xx = x; yy < y + length; xx--) {
      display.drawPixel(xx, yy, color);
      yy++;
  }
}

void drawSquare(int x, int y, int fontSize, uint16_t color, bool top, bool bottom, bool left, bool right) {
  if (top) {
    drawHorizontalLine(x, y, 3 + fontSize, color);
  }

  if (bottom) {
    drawHorizontalLine(x, y + (2 + fontSize), 3 + fontSize, color);
  }

  if (left) {
    drawVerticalLine(x, y, 3 + fontSize, color);
  }

  if (right) {
    drawVerticalLine(x + (2 + fontSize), y, (3 + fontSize), color);
  }
}

void drawLetter(int x, int y, int fontSize, uint16_t color, 
 bool top, bool middle, bool bottom,
 bool leftTop, bool leftBottom, bool rightTop, bool rightBottom,
 bool diagTopLeft, bool diagBottomLeft, bool diagTopRight, bool diagBottomRight) {
  if (top) {
    drawHorizontalLine(x, y, 3 + fontSize, color);
  } if (middle) {
    drawHorizontalLine(x, y + (2 + fontSize), 3 + fontSize, color);
  } if (bottom) {
    drawHorizontalLine(x, y + (4 + (fontSize * 2)), 3 + fontSize, color);
  }

  if (leftTop) {
    drawVerticalLine(x, y, 3 + fontSize, color);
  } if (leftBottom) {
    drawVerticalLine(x, y + (2 + fontSize), (3 + fontSize), color);
  } if (rightTop) {
    drawVerticalLine(x + (2 + fontSize), y, 3 + fontSize, color);
  } if (rightBottom) {
    drawVerticalLine(x + (2 + fontSize), y + (2 + fontSize), (3 + fontSize), color);
  }

  if (diagTopLeft) {
    drawLeftDiagonalLine(x, y, 3 + fontSize, color);
  } if (diagBottomLeft) {
    drawLeftDiagonalLine(x, y + (2 + fontSize), 3 + fontSize, color);
  } if (diagTopRight) {
    drawRightDiagonalLine(x + (2 + fontSize), y, 3 + fontSize, color);
  } if (diagBottomRight) {
    drawRightDiagonalLine(x + (2 + fontSize), y + (2 + fontSize), 3 + fontSize, color);
  }
}
