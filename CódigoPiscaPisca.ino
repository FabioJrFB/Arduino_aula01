void setup() {
pinMode(LED_BUILTIN, OUTPUT); //Configura o LED para a saída
}

void loop() {
digitalWrite(LED_BUILTIN, HIGH); //Liga o LED do arduino
delay(500);//Tempo de espera
digitalWrite(LED_BUILTIN, LOW); //Desliga o LED do arduino
delay(500);//Tempo de espera
}
