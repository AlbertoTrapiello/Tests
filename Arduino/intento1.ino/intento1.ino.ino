long tiempoinicial = 0;
long ledpin = 13;
long estadoled = LOW;
unsigned long tiempoactual; 
long intervalo = 1000;
void setup() {
  // put your setup code here, to run once:
pinMode (ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiempoactual = millis ();
  if (tiempoactual - tiempoinicial > intervalo) {
    tiempoinicial = tiempoactual;
    if (estadoled == LOW)
      estadoled = HIGH;
    
    else (estadoled = LOW);
  }
  digitalWrite (ledpin, estadoled);
}
