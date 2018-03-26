#include <SoftwareSerial.h>
#define rxPin 8
#define txPin 5
SoftwareSerial bluetooth(rxPin, txPin);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  bluetooth.begin(9600);
  Serial.println("Iniziato");
}

String messaggio = "";

void loop() {
  // put your main code here, to run repeatedly:
  while (bluetooth.available() > 0)
  {
    char comando = bluetooth.read();
    Serial.write(comando);
    if (comando == '1')
    {
      digitalWrite(13, HIGH);
    }
    else if (comando == '0')
    {
      digitalWrite(13, LOW);
    }
  }
  delay(5000);
}
