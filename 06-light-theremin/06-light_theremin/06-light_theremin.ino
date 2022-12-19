int sensorVal;

int sensorHigh = 0;
int sensorLow = 1023;

const int sensorPin = A0;
const int Buzz = 8;
const int ledPin = 13;



void setup() 
{
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  Serial.begin(9600);

  while (millis() < 5000)
  {
    sensorVal = analogRead(sensorPin);

    if (sensorVal < sensorLow)
    {
      sensorLow = sensorVal;
    }
    if (sensorVal > sensorHigh)
    {
      sensorHigh = sensorVal;
    }
  }

  digitalWrite(ledPin, LOW);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  sensorVal = analogRead(sensorPin);
  
  Serial.print("sensorVal: ");
  Serial.print(sensorVal);

  int pitch = map(sensorVal, sensorLow, sensorHigh, 40, 4000);

  Serial.print(", pitch: ");
  Serial.println(pitch);  

  tone(Buzz, pitch, 20);

  delay(10);

}
