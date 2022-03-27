//Declaracao da variavel do pino do LED
const int LED_Vespa = 15;

void setup() {

  //Declaracao do pino como saida
  pinMode(LED_Vespa, OUTPUT);
  
}

void loop() {

  //Acende o LED durante 1 segundo
  digitalWrite(LED_Vespa, HIGH);
  delay(1000);

  //Apaga o LED durante 1 segundo
  digitalWrite(LED_Vespa, LOW);
  delay(1000);
  
}
