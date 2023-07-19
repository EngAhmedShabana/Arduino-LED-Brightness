// C++ code
//
int led=11;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite(led,0);
  delay(2000);
    analogWrite(led,65);
  delay(2000);
  analogWrite(led,128);
  delay(2000);
  analogWrite(led,255);
  delay(2000);

}