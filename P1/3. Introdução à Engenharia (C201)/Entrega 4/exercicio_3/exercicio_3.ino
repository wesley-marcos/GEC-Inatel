#define LED 3
#define BUZ 4

String mensagem = "";

int led = 0;
int buz = 0;

void setup() {

  Serial.begin(9600);
  
  pinMode(LED, OUTPUT);
  pinMode(BUZ, OUTPUT);

  digitalWrite(LED, LOW);
  digitalWrite(BUZ, LOW);
}

void loop() {

    mensagem = Serial.readStringUntil('\n');

    if (mensagem != "") {

      if (mensagem == "1") {
        Serial.println ("Apertou 1!");
        led =! led;
       }
    
    else if (mensagem == "2"){
      Serial.println ("Apertou 2!");
      buz =! buz;
     }
    }

  digitalWrite(LED, led);
  digitalWrite(BUZ, buz);
}
