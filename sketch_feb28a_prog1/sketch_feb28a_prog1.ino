const int flame = 10;
const int buzzer = 11;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello");

  pinMode(flame, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(flame);
  Serial.println(value);

  if (value == 0) {
    digitalWrite(buzzer, HIGH);
    Serial.println("Flame detected");
  } 
  else {
    digitalWrite(buzzer, LOW);
    Serial.println("Flame is not detected");
  }
}