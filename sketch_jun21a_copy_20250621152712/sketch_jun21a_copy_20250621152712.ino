int one = 13;
int two = 12;
int three = 11;
int four = 10;
int five = 9;
int six = 8;
int push = 7;

void setup() {
  pinMode(one, OUTPUT);
  pinMode(two, OUTPUT);
  pinMode(three, OUTPUT);
  pinMode(four, OUTPUT);
  pinMode(five, OUTPUT);
  pinMode(six, OUTPUT);
  pinMode(push, INPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(push) == HIGH){
      digitalWrite(one, LOW);
      digitalWrite(two, LOW);
      digitalWrite(three, LOW);
      digitalWrite(four, LOW);
      digitalWrite(five, LOW);
      digitalWrite(six, LOW);
    int randnumber = random(1,7);
    Serial.println(randnumber);
    if(randnumber == 1){
      digitalWrite(one, HIGH);
    }
    else if(randnumber == 2){
      digitalWrite(one, HIGH);
      digitalWrite(two, HIGH);
    }
    else if(randnumber == 3){
      digitalWrite(one, HIGH);
      digitalWrite(two, HIGH);
      digitalWrite(three, HIGH);
    }
    else if(randnumber == 4){
      digitalWrite(one, HIGH);
      digitalWrite(two, HIGH);
      digitalWrite(three, HIGH);
      digitalWrite(four, HIGH);
    }
    else if(randnumber == 5){
      digitalWrite(one, HIGH);
      digitalWrite(two, HIGH);
      digitalWrite(three, HIGH);
      digitalWrite(four, HIGH);
      digitalWrite(five, HIGH);
    }
    else {
      digitalWrite(one, HIGH);
      digitalWrite(two, HIGH);
      digitalWrite(three, HIGH);
      digitalWrite(four, HIGH);
      digitalWrite(five, HIGH);
      digitalWrite(six, HIGH);
    }
    delay(1000);
  }
}
