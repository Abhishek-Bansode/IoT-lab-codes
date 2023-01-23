// led blinking program 

// the setup function runs once when you press reset or power the board
void setup() {
 
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);  
  delay(1000);                       
  digitalWrite(8, LOW);   
  delay(1000);                       
}
