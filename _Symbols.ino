int draw_Dash(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_Dash(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, true, false,
    false, false, false, false, 
    false, false, false, false);
    
  return x;
}

int draw_WeirdDashLeft(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_WeirdDashLeft(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, true, false,
    false, false, false, false, 
    true, true, false, false);
    
  return x;
}

int draw_WeirdDashRight(int x, int y, uint16_t color, int fontSize, int letterIndex = 1);
int draw_WeirdDashRight(int x, int y, uint16_t color, int fontSize, int letterIndex) {

  x = calculateXOffset(x, fontSize, letterIndex);

  drawLetter(x, y, fontSize, color, false, true, false,
    false, false, false, false, 
    false, false, true, true);
    
  return x;
}
