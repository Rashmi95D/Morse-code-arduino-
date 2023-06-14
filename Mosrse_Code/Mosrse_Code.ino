
int redLED  = 13;
int dot = 50;
int dash = 150; 
int longw = 2000;



void setup() {
  // put your setup code here, to run once:

  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //. . . 
  digitalWrite(redLED ,HIGH);
  delay(dit);
  digitalWrite(redLED ,LOW);
  delay(dit);
  
  digitalWrite(redLED ,HIGH);
  delay(dit);
  digitalWrite(redLED ,LOW);
  delay(dit);

  digitalWrite(redLED ,HIGH);
  delay(dit);
  digitalWrite(redLED ,LOW);
  delay(dit);

// - - - 
  digitalWrite(redLED ,HIGH);
  delay(dah);
  digitalWrite(redLED ,LOW);
  delay(dah);
  
  digitalWrite(redLED ,HIGH);
  delay(dah);
  digitalWrite(redLED ,LOW);
  delay(dah);

  digitalWrite(redLED ,HIGH);
  delay(dah);
  digitalWrite(redLED ,LOW);
  delay(dah);

// . . . 
  digitalWrite(redLED ,HIGH);
  delay(dit);
  digitalWrite(redLED ,LOW);
  delay(dit);
  
  digitalWrite(redLED ,HIGH);
  delay(dit);
  digitalWrite(redLED ,LOW);
  delay(dit);

  digitalWrite(redLED ,HIGH);
  delay(dit);
  digitalWrite(redLED ,LOW);
  delay(dit);

  delay(longw);
  
}
