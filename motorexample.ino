// Example 3 NEMA17 stepper motor, drive the motor (A4988 driver)
// defines pins numbers
const int stepPin = 3;//3 or 4
const int dirPin = 2; //2 or 5
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  Serial.begin(9600);
}
void loop() {

  Serial.print(1);
}
