/*
  modified on Sep 28, 2020
  Modified by MohammedDamirchi from https://github.com/adafruit/Adafruit_SSD1306
  Home
*/

/**************************************************************************
 This is an example for our Monochrome OLEDs based on SSD1306 drivers

 Pick one up today in the adafruit shop!
 ------> http://www.adafruit.com/category/63_98

 This example is for a 128x32 pixel display using I2C to communicate
 3 pins are required to interface (two I2C and one reset).

 Adafruit invests time and resources providing this open
 source code, please support Adafruit and open-source
 hardware by purchasing products from Adafruit!

 Written by Limor Fried/Ladyada for Adafruit Industries,
 with contributions from the open source community.
 BSD license, check license.txt for more information
 All text above, and the splash screen below must be
 included in any redistribution.
 **************************************************************************/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  // pinMode(5, OUTPUT);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // 0x3C is the standard address

  display.setTextColor(SSD1306_WHITE); 
  display.setTextSize(2);
  display.setTextWrap(true);
}

// the loop function runs over and over again forever
void loop() {
  // digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  display.clearDisplay();
  display.setCursor(0, 0);
  
  display.print("Kelvin is currently changing majors to computer engineering.");
  display.display();
  delay(3000);              // wait for a second
  
  // digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  display.clearDisplay();
  display.setCursor(0, 0);
  
  display.print("He wants to work in physical computing.");
  display.display();
  delay(3000);              // wait for a second
}

