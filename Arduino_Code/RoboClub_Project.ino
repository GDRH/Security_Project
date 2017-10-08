#define NOTE_D8  4699

void setup() {
  // Codul de aici este rulat doar o data, la inceput.
  Serial.begin(9600);
  pinMode(13, OUTPUT); // Setam pinul 13, al ledului, pe modul de OUTPUT
}

void loop() {
  // Codul de aici ruleaza repetat.
  int value = analogRead(0); // Citim valorile indicate de senzorul de distanta
  if(value>=300) // Luam ca granita valoarea de 300, astfel daca valoarea indicata de senzor este mai mare de cea de granita, inseamna ca un corp este in raza senzorului
  {
  Serial.println(value); // Trimitem valoarea pe seriala
  digitalWrite(13, HIGH); // Aprindem becul
  tone(8, NOTE_D8); // Producem sunetul
  delay(1000); // Asteptam o secunda
  noTone(8); // Oprim sunetul
  digitalWrite(13, LOW); // Stingem ledul
  }
}
