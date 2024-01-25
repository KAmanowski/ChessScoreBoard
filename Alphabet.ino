int calcLowercaseYOffset(int y, int fontSize, int matchUppercase) {
  if (matchUppercase) {
    return y + (2 + fontSize);
  } else {
    return y;
  }
}

int calculateXOffset(int x, int fontSize, int letterIndex) {
  return x + ((letterIndex - 1) * (4 + fontSize));
}

int draw_H(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_H(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, true, false,
    true, true, true, true, 
    false, false, false, false);

  return x;
}

int draw_J(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_J(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, false, true,
    false, false, true, true, 
    false, false, false, false);

  return x;
}

int draw_K(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_K(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, false, false,
    true, true, false, false, 
    false, true, true, false);

  return x;
}

int draw_L(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_L(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, false, true,
    true, true, false, false, 
    false, false, false, false);

  return x;
}

int draw_N(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_N(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, false, false,
    true, true, true, true, 
    false, false, false, false);

  return x;
}

int draw_P(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_P(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, true, false,
    true, true, true, false, 
    false, false, false, false);

  return x;
}

int draw_R(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_R(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, true, false,
    true, true, true, false, 
    false, true, false, false);
    
  return x;
}

int draw_S(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_S(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, true, true,
    true, false, false, true, 
    false, false, false, false);
    
  return x;
}

int draw_a(int x, int y, uint16_t color, int fontSize, bool matchUppercase, int letterIndex = 1);
int draw_a(int x, int y, uint16_t color, int fontSize, bool matchUppercase, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  if (matchUppercase) {
    drawHorizontalLine(x, y + (2 + fontSize), 3 + fontSize, color);
    drawVerticalLine(x, y + (2 + fontSize), (3 + fontSize), color);
    drawHorizontalLine(x, y + (5 + fontSize), 2 + fontSize, color);
    drawVerticalLine(x + (2 + fontSize), y + (2 + fontSize), (2 + fontSize), color);
  } else {
    drawHorizontalLine(x, y, 3 + fontSize, color);
    drawVerticalLine(x, y, (3 + fontSize), color);
    drawHorizontalLine(x, y + (2 + fontSize), 2 + fontSize, color);
    drawVerticalLine(x + (2 + fontSize), y, (2 + fontSize), color);
  }

  return x;
}

int draw_c(int x, int y, uint16_t color, int fontSize, bool matchUppercase, int letterIndex = 1);
int draw_c(int x, int y, uint16_t color, int fontSize, bool matchUppercase, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  if (matchUppercase) {
    drawLetter(x, y, fontSize, color, false, true, true,
      false, true, false, false, 
      false, false, false, false);
  } else {
    drawLetter(x, y, fontSize, color, true, true, false,
      true, false, false, false, 
      false, false, false, false);
  }

  return x;
}

int draw_d(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_d(int x, int y, uint16_t color, int fontSize, int letterIndex) {
 
  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, true, true,
    false, true, true, true, 
    false, false, false, false);

  return x;
}

int draw_e(int x, int y, uint16_t color, int fontSize, bool matchUppercase, int letterIndex = 1);
int draw_e(int x, int y, uint16_t color, int fontSize, bool matchUppercase, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  if (matchUppercase) {
    drawLetter(x, y, fontSize, color, false, true, true,
    false, true, false, false, 
    false, false, false, false);
    drawHorizontalLine(x, y + (fontSize / 2)  + (3 + fontSize), 3 + fontSize, color);
    
  } else {
    drawLetter(x, y, fontSize, color, false, true, true,
    false, true, true, true, 
    false, false, false, false);
  }

  return x;
}

int draw_h(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_h(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, true, false,
    true, true, false, true, 
    false, false, false, false);

  return x;
}

int draw_l(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_l(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

   drawLetter(x, y, fontSize, color, false, false, false,
    true, true, false, false, 
    false, false, false, false);

  return x + 2;
}

int draw_o(int x, int y, uint16_t color, int fontSize, bool matchUppercase, int letterIndex = 1);
int draw_o(int x, int y, uint16_t color, int fontSize, bool matchUppercase, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);
  
  drawLetter(x, y, fontSize, color, false, true, true,
    false, true, false, true, 
    false, false, false, false);

  return x;
}
