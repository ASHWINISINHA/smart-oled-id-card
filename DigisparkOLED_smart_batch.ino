#include <DigisparkOLED.h>
#include <Wire.h>
// ============================================================================

#include "img.h"





void setup() {
  // put your setup code here, to run once:

  oled.begin();

}

void loop() {
  
  oled.clear();
 
  oled.setCursor(0, 0); 
  oled.setFont(FONT8X16);
  oled.print("ASHWINI KUMAR"); 
  oled.setFont(FONT6X8);
  oled.print("MEH");
  oled.setCursor(0, 2); 
  oled.println("REG"); 
  oled.print("154338 ROLL 14-MEH");
  oled.setCursor(0, 4); 
  oled.setFont(FONT8X16);
  oled.print("SEEMANTA ");
  delay(3000);
  oled.bitmap(0, 0, 128, 8, img);
  delay(3000);
  oled.clear();
  oled.setCursor(0, 0); 
  oled.setFont(FONT8X16);
  oled.print("ASHWINI KUMAR"); //wrap strings in F() to save RAM!
  oled.setCursor(0, 2); 
  oled.setFont(FONT8X16);
  oled.print("SEEMANTA ENGINEERING ");
  oled.setCursor(0, 4); 
  oled.setFont(FONT8X16);
  oled.print("1814M14 ");
  oled.setCursor(0, 6); 
  oled.setFont(FONT8X16);
  oled.print("sinha@gmail.com");
  delay(3000);
}
