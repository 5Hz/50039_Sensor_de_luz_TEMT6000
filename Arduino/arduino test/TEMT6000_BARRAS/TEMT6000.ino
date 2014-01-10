int sensorValue;
void setup()
{
  Serial.begin(9600);  // sets the serial port to 9600
  Serial.println("Sensor de luz TEMT6000");
}

void loop()
{ 
  sensorValue = analogRead(5);       // read analog input pin 0
 // prints the value read
  int barras = sensorValue / 15;
  
  for (int i=0; i <= barras; i++)
     Serial.print("-");
  Serial.print(" ");
//  Serial.print("sensor = " );                       
  Serial.println(sensorValue);      
//  Serial.print("output = ");      
//  Serial.println(outputValue);   

  // wait 10 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(100);   
  // wait 100ms for next reading
    }
