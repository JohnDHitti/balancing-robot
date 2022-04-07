// Example 1-1, joystick and open-smart wireless, TX
#include <SoftwareSerial.h>

int p = 0;
int i = 0;
int d = 0;

SoftwareSerial BlueSerial(2, 3); // RX, TX

void setup() {
  // set the data rate for the SoftwareSerial port
  BlueSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  int p = map(analogRead(A0), 0, 1028, 0, 500);
  int i = map(analogRead(A1), 0, 1028, 0, 100);
  int d = map(analogRead(A2), 0, 1028, 0, 500);
  Serial.println(p);
  Serial.println(i);
  Serial.println(d);
  BlueSerial.println(p);
  BlueSerial.println(i);
  BlueSerial.println(d);
  delay(100);
}

// Example 1-2, joystick and open-smart wireless, RX
