#define NOTE_D8  4699

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(0);
  if(value>=300) 
  {
  Serial.println(value);
  digitalWrite(13, HIGH);
  tone(8, NOTE_D8);
  delay(1000);
  noTone(8);
  digitalWrite(13, LOW);
  }
}
