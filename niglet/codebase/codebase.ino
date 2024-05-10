/* This one have to be finished in roughly 2 days so I'll just use
 * Arduino IDE for the convenient moment.
 *
 * Copyright (C) 2024, LycorisOSS. All right reserved.
*/

// Are we going to do an engineering build?
#define DEBUG_BUILD true

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

// Format:
// Analog pinout uses <#define>
// Digital pinout uses <const int> and it means define pin is
// connected at pin D(i) in the board.

// Allow clients to use buttons. 0 is off, 1 is on.
const int button_1 = 2;
const int button_2 = 3;
const int button_3 = 4;

// S = orange + yellow
// + = yellow + teal
// - = white + black
#define WATER_PIN A0
const int water_power = 5;

// Pump
// Pump 1 = Lower stage pump
// Pump 2 = Upper stage pump
const int pump1_pin = 6;
const int pump2_pin = 7;

/*  Setting up the LCD
 *  LCD I2C ID = 0x27, has 16 characters on one line.
 *  The screen support 2 lines. Used pins are A4 and A5.
 *  MUST BE lcd_0!
 *  Usage: LiquidCrystal_I2C lcd_0(ID, number of character on each line, line)
 */
LiquidCrystal_I2C lcd_0(0x27, 16, 2);

// Misc
int flag = 0;

// Button Event Listener
int ButtonEventListener(int pin) {
  int state = digitalRead(pin);
#if 0
  Serial.print("Listening on Digital Pinout number ");
  Serial.println(pin);
#endif
  if (state == LOW) {
    return 2;
  } else if (state == HIGH) {
    return 1;
  }
}

void DigitalEventHandler(int pin, int time, int concurrent) {
  digitalWrite(pin, HIGH);
  
  if (concurrent == 1) {
    digitalWrite(pin + 1, HIGH)
  }
  
  delay(time);
  if (concurrent == 1) {
    delay(time)
  }
  
  digitalWrite(pin, LOW);
  if (concurrent == 1) {
    digitalWrite(pin + 1, LOW)
  }
}


void setup() {
  Serial.begin(9600);

#ifdef DEBUG_BUILD
  Serial.println("========================================================");
  Serial.println("ENGINEERING BUILD FLAG TRIGGERED");
  Serial.println("========================================================");
#endif

  // Setting up relay
  pinMode(pump1_pin, OUTPUT);
  pinMode(pump2_pin, OUTPUT);

  // Setting up button
  pinMode(button_1, INPUT);
  pinMode(button_2, INPUT);
  pinMode(button_3, INPUT);

  // Activate Arduino internal pull up.
  // We're using buttons without resistors.
  digitalWrite(button_1, HIGH);
  digitalWrite(button_2, HIGH);
  digitalWrite(button_3, HIGH);
  
  // Setting up the water sensor
  pinMode(water_power, OUTPUT);
  digitalWrite(water_power, LOW);

  // Wake up, sweetie.
  // Probe the LCD while at it.
  lcd_0.init();
  lcd_0.backlight();
}

void loop() {
  ButtonEventListener(button_1);
  ButtonEventListener(button_2);
  ButtonEventListener(button_3);

  // Read the information from the first water sensor
  digitalWrite(water_power, HIGH);
  delay(100);
  int currentValue = analogRead(WATER_PIN);
  int lastValue = currentValue;
  digitalWrite(water_power, LOW);

  // LCD changes start
  // First line of the LCD
  lcd_0.setCursor(0, 0);
  lcd_0.print("Water = ");
  lcd_0.setCursor(10, 0);
  lcd_0.print(currentValue);

  Serial.print("Water sensor value in real-time: ");
  Serial.println(currentValue);
  flag += 1;
 
  if (currentValue > 30)
  {
    Serial.println("WARNING: Warning level 3!");
    Serial.println("Triggering upper pump automatically without user operation!");
    digitalWrite(pump1_pin, HIGH);
    delay(4000);
    digitalWrite(pump1_pin, LOW);
  }
  
  if (ButtonEventListener(button_1) == 2)
  {
    Serial.println("Button 2 pressed. Triggering all possible pumps...");
    digitalWrite(pump1_pin, HIGH);
    delay(4000);
    digitalWrite(pump1_pin, LOW);
  }

  if (ButtonEventListener(button_2) == 2)
  {
    Serial.println("Button 2 pressed. Triggering all possible pumps...");
    digitalWrite(pump2_pin, HIGH);
    delay(4000);
    digitalWrite(pump2_pin, LOW);
  }

  if (ButtonEventListener(button_3) == 2)
  {
    Serial.println("Button 3 pressed. Triggering all possible pumps...");
    digitalWrite(pump1_pin, HIGH);
    digitalWrite(pump2_pin, HIGH);
    delay(4000);
    digitalWrite(pump1_pin, LOW);
    digitalWrite(pump2_pin, LOW);
  }
}
