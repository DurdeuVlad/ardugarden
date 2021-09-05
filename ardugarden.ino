int Relay = 7;  


void setup() {
  pinMode(Relay, OUTPUT);
  Serial.begin(9600);
}

long DaysToMiliseconds(long days) {
  return HoursToMinutes(24 * days);
}
long HoursToMinutes(long hours) {
  return MinutesToSeconds(hours* 60);
}
long MinutesToSeconds(long minutes) {
  return SecondsToMiliseconds(minutes * 60);
}
long SecondsToMiliseconds(long seconds) {
  return seconds * 1000;
}

void loop() {
  Serial.println("7 days ="+DaysToMiliseconds(7));
  Serial.println("\n");
  
  
  delay(MinutesToSeconds(0.2));
  digitalWrite(Relay, HIGH);
  delay(MinutesToSeconds(1));
  digitalWrite(Relay, LOW);
  delay(DaysToMiliseconds(7));

}
