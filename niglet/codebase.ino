/* This one have to be finished in roughly 2 days so I'll just use
 * Arduino IDE for the convenient moment.
 *
 * Copyright (C) 2024, LycorisOSS. All right reserved.
*/

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

// Format:
// Analog pinout uses <#define>
// Digital pinout uses <const int> and it means define pin is
// connected at pin D(i) in the board.
#define WATER_PIN A0
const int water_power = 7;
const int pump1_pin = 6;
const int pump2_pin = 5;
const int pump3_pin = 4;

// Allow clients to use buttons. 0 is off, 1 is on.
const int button_1 = 8;
const int button_2 = 9;
const int button_3 = 10;

// Keep the button state.
static int button_1_lastState = LOW;
static int button_2_lastState = LOW;
static int button_3_lastState = LOW;

/*  Setting up the LCD
 *  LCD I2C ID = 0x27, has 16 characters on one line.
 *  The screen support 2 lines. Used pins are A4 and A5.
 *  MUST BE lcd_0!
 *  Usage: LiquidCrystal_I2C lcd_0(ID, number of character on each line, line)
 */
LiquidCrystal_I2C lcd_0(0x27, 16, 2);

void getValues(int pin, int analog_pin) {
  // Read the information from the first water sensor
  digitalWrite(pin, HIGH);
  delay(10);
  int value = analogRead(analog_pin);
  digitalWrite(pin, LOW);

  Serial.println("Water sensor value in real-time:");
  Serial.println(value);

  // LCD changes start
  // First line of the LCD
  lcd_0.setCursor(0, 0);
  lcd_0.print("Water = ");
  lcd_0.setCursor(10, 0);
  lcd_0.print(value);
}

void setup() {
  Serial.begin(115200);

  // Setting up relay
  pinMode(pump1_pin, OUTPUT);
  pinMode(pump2_pin, OUTPUT);

  // Setting up button
  pinMode(button_1, INPUT);
  pinMode(button_2, INPUT);

  // Setting up the water sensor
  pinMode(water_power, OUTPUT);
  digitalWrite(water_power, LOW);

  // Wake up, sweetie.
  // Probe the LCD while at it.
  lcd_0.init();
  lcd_0.backlight();
}

void loop() {
  // Read current state of button 1
  int button_1_currentState = digitalRead(button_1);

  // Read values from the water sensor
  if (button_1_currentState == HIGH) {
    getValues(water_power, WATER_PIN);
  }
  
  // If the current state of the button match with the last
  // one, halt.
  if(button_1_currentState != button_1_lastState) {
     button_1_lastState = button_1_currentState;
     digitalWrite(pump1_pin, LOW);
     digitalWrite(pump2_pin, LOW);
     
     do {
      lcd_0.clear();
      lcd_0.setCursor(0, 0);
      lcd_0.print("System halted!");
      loop();
     } while (digitalRead(button_1) == LOW);

     getValues(water_power, WATER_PIN);
  }

  // Raise a warning when it reach a certain point
  digitalWrite(pump1_pin, HIGH);
  delay(3000);
  digitalWrite(pump1_pin, LOW);
  delay(3000);

  if (digitalRead(button_3) == HIGH) {
    digitalWrite(pump2_pin, HIGH);
    delay(3000);
    digitalWrite(pump2_pin, LOW);
    delay(3000);
  }

}
