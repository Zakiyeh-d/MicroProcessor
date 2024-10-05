int led=13;
void setup() {
pinMode(led,OUTPUT);
}

void loop() {
digitalWtite(led,HIGH);
delay(1000);
digitalWtite(led,LOW);
delay(1000);
}
