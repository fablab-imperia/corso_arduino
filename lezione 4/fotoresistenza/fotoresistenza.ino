void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int valore;
  valore = analogRead(A0);
  Serial.println(valore);
  delay(2000);
}
