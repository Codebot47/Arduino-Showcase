const int greenPin = 11;
const int yellowPin = 12;
const int redPin = 13;

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {

  for (int value = 0; value <= 254; value+=2) {
    analogWrite(11, value);
    delay(10);
  }

  delay(2000); // red for 3 seconds

  for (int value = 254; value >= 0; value-=2) {
    analogWrite(11, value);
    delay(10);
  }

  for (int value = 0; value <= 254; value+=2) {
    analogWrite(12, value);  
    delay(10);              
  }

  delay(2000);

   for (int value = 254; value >= 0; value-=2) {
    analogWrite(12, value);
    delay(10);
  }

  for (int value = 0; value <= 254; value+=2) {
    analogWrite(13, value);  
    delay(10);               
  }

  delay(2000);

  for (int value = 254; value >= 0; value-=2) {
    analogWrite(13, value);
    delay(10);
  }
}

