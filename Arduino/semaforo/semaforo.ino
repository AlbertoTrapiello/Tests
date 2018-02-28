long estadoledrojo = HIGH;
long estadoledambar = LOW;
long estadoledverde = LOW;
long tiempoinicial = 0;
unsigned long tiempoactual;
long intervalo5 = 5000;
long intervalo10 = 10000;
long intervalo15 = 15000;
long intervalo20= 20000;
long parpadeo = 1000;
int pinrojo = 13;
int pinambar = 12;
int pinverde = 11;


void setup() {
  // put your setup code here, to run once:
pinMode (pinrojo, OUTPUT);
pinMode (pinambar, OUTPUT);
pinMode (pinverde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 tiempoactual=millis ();
if(tiempoactual<15000) {
  if (estadoledrojo==HIGH,tiempoactual-tiempoinicial>intervalo5) {
    if (estadoledrojo==HIGH)
      estadoledrojo=LOW;
  }
  if (estadoledrojo==LOW,tiempoactual-tiempoinicial>intervalo15) {  
    if (estadoledrojo==LOW)
      estadoledrojo=HIGH;
  }
  
 digitalWrite (pinrojo,estadoledrojo); 
 tiempoactual= millis();
 if (estadoledambar == LOW,tiempoactual-tiempoinicial>intervalo5){
  if (estadoledambar==LOW)
  estadoledambar=HIGH;
    while (estadoledambar==HIGH)
    {
      digitalWrite(pinambar, HIGH);
      tiempoinicial=4500;
      digitalWrite(pinambar, LOW);

 }
   }
   tiempoinicial=0;
   
 if (estadoledambar ==HIGH,tiempoactual-tiempoinicial>intervalo10){
  if (estadoledambar==HIGH)
 
 estadoledambar=LOW;
 }
 
 digitalWrite (pinambar,estadoledambar);
  

      tiempoactual=millis ();
 if (estadoledverde==LOW,tiempoactual-tiempoinicial>intervalo10){
  if (estadoledverde==LOW)
  estadoledverde=HIGH;
 
  if (estadoledverde==HIGH,tiempoactual-tiempoinicial>intervalo15){
    if (estadoledverde==HIGH)
    estadoledverde = LOW;
  }
}

 digitalWrite (pinverde,estadoledverde);
}
}


  
