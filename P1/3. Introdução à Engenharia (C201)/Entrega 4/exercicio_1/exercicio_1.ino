#define LED 3
#define V 51
#define tempo 2000

void setup() {

  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop() {
  analogWrite(LED, 2 * V);   
  delay(tempo);    
                     
  analogWrite(LED, 4 * V);    
  delay(tempo);                       
}
