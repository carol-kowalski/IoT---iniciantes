// C++ code
//
int asd = 0;

int i = 0;

int led = 0;

void setup()
{
  pinMode(6, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  if (digitalRead(6) == 0) {
    digitalWrite(3, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(5, LOW);
  } else {
    digitalWrite(7, HIGH);
    tone(8, 52, 3000); // play tone 20 (G#1 = 52 Hz)
    delay(5000); // Wait for 5000 millisecond(s)
    digitalWrite(7, LOW);
  }
}