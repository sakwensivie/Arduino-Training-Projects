int switchState = 0;
/**
 * setup - excecute once
 * Return: none
 *
 */
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  
}

/**
 * loop - infinite loop
 * Return: none
 *
 */
void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);   /*reads the state of the circuit if on(1) or off(0)*/
  
  if (switchState == 0)
  {
    digitalWrite(3, 1); /*Turns on the green light and turns off the red lights*/
    digitalWrite(4, 0);
    digitalWrite(5, 0);    
  }
  else
  {
    digitalWrite(3, 0); /*Turns on the last red light and turns off the rest*/
    digitalWrite(4, 0);
    digitalWrite(5, 1);
  }

  delay(250);

  digitalWrite(4, 1); 
  digitalWrite(5, 0);
  
  delay(250);

}
