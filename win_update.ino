#include"Keyboard.h"
void setup() {
  Keyboard.begin();
  delay(2000);
}
void loop() {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(100);
  delay(100);
  Keyboard.print("iexplore -k https://fakeupdate.net/win10ue/");
  delay(1000);
  Keyboard.press(KEY_RETURN);

  Keyboard.releaseAll();


  delay(3000);
  Keyboard.press(KEY_F11);
  Keyboard.releaseAll();
    for (;;) {}
}