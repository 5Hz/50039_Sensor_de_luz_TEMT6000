
/******************************************************************
** Código creado en Electrónica 5Hz                              **
** www.5hz-electronica.com                                       **
** Por:                                                          **
** Basado en el código de:                                       **
** Descripción del código:                                       **
**                                                               **
** Ejemplo para el sensor de luz TEMT6000                        **
** Lee con una resolucion de 10bits el nivel de luz              **
** en el ambiente.                                               **
*******************************************************************

Conexiones para la comunicacion i2c usando el breakout de 5Hz con un Arduino Uno / Duemilanove:
Arduino <-> Breakout board
Gnd      -  GND
5v       -  VCC
5v       -  CS
Analog 4 -  SDA
Analog 5 -  SCL

Conexiones para la comunicacion i2c usando el breakout de 5Hz con un Arduino Mega / Mega ADK:
Arduino <-> Breakout board
Gnd      -  GND
5v       -  VCC
5v       -  CS
20       -  SDA
21       -  SCL
*/


int sensorValue; // Inicializacion de variable
float sensorValueLux; // Inicializacion de variable
void setup()
{
  Serial.begin(9600);  // Configura la velocidad de transmision
  Serial.println("Sensor de luz TEMT6000");
}

void loop()
{ 
  
  //Obtencion de valores
  sensorValue = analogRead(5);        // Lee la entrada analogica del pin 5 
  sensorValueLux=sensorValue*0.976;   //Conversion a Lux
  
  //Impresion de datos en el puerto serial
  Serial.print("Bits: ");
  Serial.print(sensorValue);          // Imprime el valor leido en bits
  Serial.print("\tLux: ");
  Serial.println(sensorValueLux);     // Imprime el valor en Lux.
  delay(100);                         // Retardo de 100 milisegundos 
  
    }
