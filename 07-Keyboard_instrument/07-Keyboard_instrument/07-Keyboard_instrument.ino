
int notes[] = {400, 450, 500, 550};
// int buttons[6];

// buttons[0] = 2;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int keyVal = analogRead(A0);
  
  Serial.println(keyVal);
  
if (keyVal == 1023)
{
  tone (8, notes[0]);
}
else if ((keyVal > 554) && (keyVal < 557))
{
  tone(8, notes[1]);  
}
else if ((keyVal > 550) && (keyVal < 554))
{
  tone(8, notes[2]);
}
else if ((keyVal > 682) && (keyVal < 686))
{
  tone(8, notes[3]);
}
else
{
  noTone(8);
}
}