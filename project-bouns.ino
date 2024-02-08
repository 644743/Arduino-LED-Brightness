// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  analogWrite(9, 0);
  delay(250);
  analogWrite(9, 64);
  delay(250);
  analogWrite(9, 128);
  delay(250);
  analogWrite(9, 192);
  delay(250);
  analogWrite(9, 255);
  delay(250);
  analogWrite(9, 255);
  delay(500);
  analogWrite(9, 192);
  delay(500);
  analogWrite(9, 128);
  delay(500);
  analogWrite(9, 64);
  delay(500);
  analogWrite(9, 0);
  delay(500); 
}


