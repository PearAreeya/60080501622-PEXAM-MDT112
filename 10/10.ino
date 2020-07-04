int buttonState = 0;     
void setup() {
 pinMode(2,INPUT_PULLUP); 
 delay(650);

}

void loop() {
 buttonState = digitalRead(2);     // read value 
  if (buttonState == HIGH)       
  {
 digitalWrite(8,LOW);
  }
  else{
     tone(8,600,500);
    }
}
