/* developer tilak 
This test code is written for LCD srial display  
I am using this for just checking the LCD 20x4 NXP display

This code can be cut paseted for the entire code to run when serial print
command is given it prints data in the LCD(with in bult serial transfer) :)
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


