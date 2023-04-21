#define LED_ROJO1 13
#define LED_ROJO2 11
#define LED_AMARILLO1 9
#define LED_AMARILLO2 7
#define LED_VERDE1 4
#define LED_VERDE2 2

void EncendidoApagadoRojo(int timer, int LED);
void EncendidoApagadoAmarillo(int timer, int LED);
void EncendidoApagadoVerde(int timer, int LED);

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(LED_ROJO1, OUTPUT);
  pinMode(LED_ROJO2, OUTPUT);
  pinMode(LED_AMARILLO1, OUTPUT);
  pinMode(LED_AMARILLO2, OUTPUT);
  pinMode(LED_VERDE1, OUTPUT);
  pinMode(LED_VERDE2, OUTPUT);
}

void loop()
{
  digitalWrite(LED_ROJO1, HIGH);
  digitalWrite(LED_ROJO2, HIGH);
  delay(1000); 
  digitalWrite(LED_ROJO1, LOW);
  digitalWrite(LED_ROJO2, LOW);
  delay(1000);
  tone(10, 1000);
  delay(1000);
  noTone(10);
  delay(1000);
}

void EncendidoApagado (int timer, int LED){
  digitalWrite(LED_ROJO1, HIGH);
  digitalWrite(LED_ROJO2, HIGH);
  delay(1000); 
  digitalWrite(LED_ROJO1, LOW);
  digitalWrite(LED_ROJO2, LOW);
  delay(1000); 
}