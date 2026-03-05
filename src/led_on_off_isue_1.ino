String comando = "";
int led = 25;  // GPIO 2

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(115200);
  Serial.println("Escribe 'on' para encender o 'off' para apagar el LED");
}

void loop() {
}
