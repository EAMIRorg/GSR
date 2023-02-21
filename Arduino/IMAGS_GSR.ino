const int gsrPin = A0;  // GSR sensor is connected to analog pin A0

void setup() {
  Serial.begin(9600);  // start serial communication at 9600 baud rate
}

void loop() {
  int gsrValue = analogRead(gsrPin);  // read the value from the GSR sensor
  Serial.println(gsrValue);  // print the GSR value to the serial monitor
  delay(50);  // wait for 50 miliseconds before reading again
}