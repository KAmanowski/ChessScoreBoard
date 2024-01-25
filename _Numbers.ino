int draw_One(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_One(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, false, false,
    false, false, true, true, 
    false, false, false, false);
    
  return x;
}

int draw_Two(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Two(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, true, true,
    false, true, true, false, 
    false, false, false, false);
    
  return x;
}

int draw_Three(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Three(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, true, true,
    false, false, true, true, 
    false, false, false, false);
    
  return x;
}

int draw_Four(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Four(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, true, false,
    true, false, true, true, 
    false, false, false, false);
    
  return x;
}

int draw_Five(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Five(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, true, true,
    true, false, false, true, 
    false, false, false, false);
    
  return x;
}

int draw_Six(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Six(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, true, true,
    true, true, false, true, 
    false, false, false, false);
    
  return x;
}

int draw_Seven(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Seven(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, false, false,
    false, false, true, true, 
    false, false, false, false);
    
  return x;
}

int draw_Eight(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Eight(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, true, true,
    true, true, true, true, 
    false, false, false, false);
    
  return x;
}

int draw_Nine(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Nine(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, true, false,
    true, false, true, true, 
    false, false, false, false);
    
  return x;
}

int draw_Zero(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Zero(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, true, false, true,
    true, true, true, true, 
    false, false, false, false);
    
  return x;
}
