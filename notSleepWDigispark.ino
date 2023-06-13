#include <DigiMouse.h>

void setup() {
  DigiMouse.begin();
}

void loop() {
  DigiMouse.moveX(700);
  DigiMouse.delay(500);
  DigiMouse.moveX(-700);
  DigiMouse.delay(500);
}
