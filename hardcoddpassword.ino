#include "Keyboard.h"

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(3000);
  Keyboard.print("Your Password Here!");
  // do nothing:
  while (true);
}
