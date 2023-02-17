// C++ code
//

const int switchPin = 8;
const int LED[] = {2, 3, 4, 5, 6, 7};
unsigned long previousTime = 0;
int switchState = 0;
int prevSwitchState = 0;
long interval = 600000;


void setup()
{
  int i;
  pinMode(switchPin, INPUT);
  for (i = 0; i < 6; i++)
  {
    pinMode(LED[i], OUTPUT);
  }
  i = 0;
}

void loop()
{
  unsigned long currentTime = millis();
  int i = 0;
  
  
  if ((currentTime - previousTime) > interval)
      {
        previousTime = currentTime;
        
        digitalWrite(LED[i], HIGH);
        
        i++;
        
        if (LED[i] == 7)
        {
        }
        
        switchState = digitalRead(switchPin);
        
        if (switchState != prevSwitchState)
        {
          for (int j = 0; j < 6; j++)
          {
            digitalWrite(LED[j], LOW);
          }
          previousTime = currentTime;
        }
        prevSwitchState = switchState;
  }
}