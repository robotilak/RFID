/* RFID Tag reader cc robotilak.com  
The module use is a EM18 reader module 
EM 18 RS232 pin to TX of ATMega 2560.
GND common 
This was used just to read the tag reading :)
*/


char val = 0; // variable to store the ave  h from the serial port


void setup() 
  {
    Serial.begin(9600); // connect to the serial port
  }


void loop () 
{
    // read the serial port
    if(Serial.available() > 0) 
    {
      val = Serial.read();
      Serial.write(val);
    }
}


