
const int aqsensor = A0;        
void setup() {
  pinMode (aqsensor,INPUT); 
  Serial.begin (9600);      
}
void loop() {
  int ppm = analogRead(aqsensor); 
  Serial.println(ppm);           
  delay (500);
}
