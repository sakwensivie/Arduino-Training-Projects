/* setup constants for the input and output pins*/
const int redLED = 9;
const int blueLED = 10;
const int greenLED = 11;

const int redSensorPin = A0;
const int blueSensorPin = A1;
const int greenSensorPin = A2;

int redValue;
int blueValue;
int greenValue;

int redSensorValue;
int blueSensorValue;
int greenSensorValue;

/**
 * setup - run once at the beginning of the program
 * Return: None
 */
 
void setup() 
{
  // put your setup code here, to run once:\

  //setup LED pins for output
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  
  //begin the serial monitor
  Serial.begin(9600);

}

/**
 * loop - run in an infinite loop
 * Return: None
 */
void loop() 
{
  // put your main code here, to run repeatedly:

  //  Read the photo resistor values and store them in the appropriate variables
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);

  // display the raw values on the serial monitor
  Serial.print("Raw Sensor Values \t Red: ");  
  Serial.print(redSensorValue);  
  Serial.print("\t Green: ");  
  Serial.print(greenSensorValue);  
  Serial.print("\t Blue: ");  
  Serial.println(blueSensorValue);
  delay (5);

  // Change the values on the 1024 scale to a 255 scale to be used as the inputs to the analogRead function
  redValue = redSensorValue/4;  
  greenValue = greenSensorValue/4;  
  blueValue = blueSensorValue/4;

  Serial.print("Mapped Sensor Values \t Red: ");  
  Serial.print(redValue);  
  Serial.print("\t Green: ");  
  Serial.print(greenValue);  
  Serial.print("\t Blue: ");  
  Serial.println(blueValue); 


  
  analogWrite(redLED, redValue);  
  analogWrite(greenLED, greenValue);  
  analogWrite(blueLED, blueValue); 

  delay(5);
 

}
