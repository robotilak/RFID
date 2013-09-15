/* This test code is written for LCD srial display  
I am using this for just checking the LCD 20x4 NXP display
cc robotilak.com*/

void setup()
{
  Serial.begin(9600); //  begin Serial
}
void loop()
{ 
  clearLCD();
  Serial.write(" Hello");  // print text to the current cursor position
  newLine();              // start a new line
  Serial.write("Arduino");
  delay(1000);
}

void clearLCD(){
  Serial.write(12);
}


// start a new line
void newLine() { 
  Serial.write(10); 
}


