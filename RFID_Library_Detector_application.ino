/* I have managed to make this todetect any RFID tag that comes in the rage of the scanner of 125 kHz  
this was fun though the out put is thourh an LEd one can use a buzzer 
I will modify this soon :)
*/

int val=0;
String code="";
String Master="";
void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop()
  {
   if(Serial.available()>0)
   {
      val=Serial.read();
 
      Serial.print(val,HEX);
      code +=String(val,HEX);
      digitalWrite(13,HIGH);
      delay(300);
      digitalWrite(13,LOW);
      Serial.print(code);
    
     if(val==0)
     {
       Serial.println();
       Serial.println(code);
       if(code.equalsIgnoreCase(Master))
      {
        digitalWrite(11,HIGH);
        delay(100);
 
      }
    }
  }
}
      

