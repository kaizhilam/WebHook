int led = D7;
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   //turn on the LED
  String temp = String(random(60, 80)); //do not have actual temp sensor setup, so use random temp generator
  Particle.publish("temp", temp, PRIVATE);
  digitalWrite(led, LOW);    //turn off the LED
  delay(30000);               //30 seconds interval
}
