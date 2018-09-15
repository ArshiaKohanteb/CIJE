/*
Arshia Kohanteb created: August 20th
D11 = RED;
D10 = YELLOW;
D9 = GREEN;
*/

//THERE ARE 3 SECTIONS OF THE IDE:
//*GLOBAL VARIABLES
//*SETUP
//*LOOP

void setup() {
  // initialize digital pin 13 as an output.
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9,  OUTPUT);
}

void loop() {
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11 , LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10 , LOW);
  delay(1000);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9 , LOW);
  delay(1000);
}
