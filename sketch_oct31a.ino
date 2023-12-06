const int ledPin = 13;
const int ldrPin = A0;
int treshold = 600;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin,INPUT);
}
void loop()
{
  int ldrStatus = analogRead(ldrPin);
  if(ldrStatus <= treshold)
  {
    digitalWrite(ledPin, HIGH);
    Serial.print("Its Dark, Turn on the LED :");
    //Serial.println(ldrStatus);
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.print("Its BRIGHT, Turn off the LED:");
   // Serial.println(ldrStatus);
  }
}