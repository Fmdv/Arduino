//Programa : Pisca pisca
//Autor : Fernanda Vieira

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Acende o LED
  digitalWrite(11, HIGH);

  //Aguarda o intervalo de tempo em milissegundos
  delay(1000);

  //Apaga o LED
  digitalWrite(11, LOW);

  //Aguarda o intervalo de tempo em milissegundos
  delay(1000);
}
