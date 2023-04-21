#define LED_ROJO1 13
#define LED_ROJO2 11
#define LED_AMARILLO1 9
#define LED_AMARILLO2 7
#define LED_VERDE1 4
#define LED_VERDE2 2

void EncendidoApagado(int led1, int led2, int timer);


void setup(){
  pinMode(LED_ROJO1, OUTPUT);
  pinMode(LED_ROJO2, OUTPUT);
  pinMode(LED_AMARILLO1, OUTPUT);
  pinMode(LED_AMARILLO2, OUTPUT);
  pinMode(LED_VERDE1, OUTPUT);
  pinMode(LED_VERDE2, OUTPUT);

}

void loop()
{
  EncendidoApagado(LED_ROJO1, LED_ROJO2, 30);
  EncendidoApagado(LED_AMARILLO1, LED_AMARILLO2, 3); 
  EncendidoApagado (LED_VERDE1, LED_VERDE2, 1);
}

void EncendidoApagado(int led1, int led2, int vueltas){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  
  for (int i = 0; i < vueltas; i++){ 
    if (led1 == LED_ROJO1 || led2 == LED_ROJO2){
        tone(12,500);
        delay(500);
        noTone(12);
        delay(500);
    } else if (led1 == LED_AMARILLO1 || led2 == LED_AMARILLO2){
        tone(12,200);
        delay(1000);
        noTone(12);
        delay(1000);
    } else if (led1 == LED_VERDE1 || led2 == LED_VERDE2){
      delay(45000);
    }

  }
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}