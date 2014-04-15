char *video = (char*)0xb8000;

void clear();
void print();

void kmain() {
  char *text = "mos: Vozdra Dave, ma nea sanse Dave";
  clear();
  print(text);
}

void clear () {
  int i = 0;

  while(i < 80 * 25 * 2) { 
    video[i] =  ' ';
    video[i+1] = 0x07; //attribute byte, set color;
    i += 2;
  }
}

void print(char* text) {
  int i = 0;
  int j =0;

  while(text[j] != '\0') {
    video[i] = text[j];
    video[i+1] = 0x07;
    ++j;
    i += 2;
  }
}

