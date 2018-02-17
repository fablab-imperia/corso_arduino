#define vel_suono 343

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  digitalWrite(13,LOW);
  delayMicroseconds(2);
  digitalWrite(13,HIGH);
  delayMicroseconds(10);
  digitalWrite(13,LOW);
  int tempo_us = pulseIn(8,HIGH);//è in MICROSECONDI
  // print out the value you read:
  float tempo_s = tempo_us/1000000.0;
  float spazio = (tempo_s/2)*vel_suono;
  Serial.print(spazio);
  Serial.println(" metri");
  delay(3000);        // delay in between reads for stability
}
