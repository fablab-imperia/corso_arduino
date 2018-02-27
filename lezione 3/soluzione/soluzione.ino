void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);//il pin usato per leggere il pulsante
  pinMode(10,OUTPUT);//il pin usato in uscita
}

void loop() {
  // put your main code here, to run repeatedly:
  int stato;
  stato=digitalRead(8);
  if (stato==HIGH)
  {
     digitalWrite(10,HIGH);
  }
  else
  {
     digitalWrite(10,LOW);
  }
  delay(1000);
}
