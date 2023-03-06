int buzzerPin = 8; 
int frequency = 1000; 

void setup() {
  pinMode(buzzerPin, OUTPUT); 
}

void loop() {
  tone(buzzerPin, frequency); 
  delay(1000); 
  noTone(buzzerPin); 
  delay(1000); 
}
