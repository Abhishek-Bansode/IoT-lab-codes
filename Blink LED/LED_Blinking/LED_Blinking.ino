int temperature;
void setup() {
 Serial.begin(9600);
 
}

void loop() {
  temperature=analogRead(A0);         
  Serial.print("Temperature is: ");
  Serial.println(A0);          
  delay(1000);
}
