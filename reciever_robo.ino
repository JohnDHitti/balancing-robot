//// Example 1-1, joystick and open-smart wireless, TX
//#include <SoftwareSerial.h>
//const int joystickYPin = A1;
//int joystickMaxValue = 0;
// 
//SoftwareSerial BlueSerial(2, 3); // RX, TX
// 
//void setup() {
//  // set the data rate for the SoftwareSerial port
//  BlueSerial.begin(9600);
//}
// 
//void loop() {
//  int joystickValue = analogRead(joystickYPin);
//  BlueSerial.println(joystickValue);
//  delay(1000);
//}

// Example 1-2, joystick and open-smart wireless, RX
#include <SoftwareSerial.h>
 
SoftwareSerial BlueSerial(6, 7); // RX, TX
String incomingMessage="";;
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  // set the data rate for the SoftwareSerial port
  BlueSerial.begin(9600);
}
void loop() // run over and over
{
    while (BlueSerial.available())
    {
      Serial.print("avail");
        char character = BlueSerial.read(); // Receive a single character from the software serial port
        incomingMessage.concat(character); // Add the received character to the receive buffer
        if (character == '\n')// the message ends with '\n', so when '\n' shows up,
        // that data point is sent successfully.
        {
            Serial.print("Received: ");
            Serial.println(incomingMessage);
            Serial.println(incomingMessage.toInt());// convert string to int
            // Clear receive buffer so we're ready to receive the next line
            incomingMessage = "";
        }
    }

}
