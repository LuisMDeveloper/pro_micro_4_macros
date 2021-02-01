
#include "Keyboard.h"

// use this option for OSX:
//char ctrlKey = KEY_LEFT_GUI;
// use this option for Windows and Linux:
char ctrlKey = KEY_LEFT_CTRL;

char altKey = KEY_LEFT_ALT;

#define PULSADOR_1 4
#define PULSADOR_2 2
#define PULSADOR_3 5
#define PULSADOR_4 3

void setup() {
  pinMode(PULSADOR_1, INPUT_PULLUP);
  pinMode(PULSADOR_2, INPUT_PULLUP);
  pinMode(PULSADOR_3, INPUT_PULLUP);
  pinMode(PULSADOR_4, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (digitalRead(PULSADOR_1) == LOW) {
    Keyboard.press(ctrlKey);
    Keyboard.press(altKey);
    Keyboard.press('a');
    delay(100);
    Keyboard.releaseAll();
    delay(300);
  }
  if (digitalRead(PULSADOR_2) == LOW) {
    Keyboard.press(ctrlKey);
    Keyboard.press(altKey);
    Keyboard.press('b');
    delay(100);
    Keyboard.releaseAll();
    delay(300);
  }
  if (digitalRead(PULSADOR_3) == LOW) {
    Keyboard.press(ctrlKey);
    Keyboard.press(altKey);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
    delay(300);
  }
  if (digitalRead(PULSADOR_4) == LOW) {
    Keyboard.press(ctrlKey);
    Keyboard.press(altKey);
    Keyboard.press('d');
    delay(100);
    Keyboard.releaseAll();
    delay(300);
  }
}
