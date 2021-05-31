int ena = 12, enb = 11, en1 = 10, en2 = 9, en3 = 8, en4 = 7, push = 4, est = 0, trig = 6, echo = 5, tiempo, distancia;
char datos;
void setup() {
  pinMode(ena,OUTPUT);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(enb,OUTPUT);
  pinMode(en3,OUTPUT);
  pinMode(en4,OUTPUT);
  pinMode(push,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
 est = digitalRead(push);
  digitalWrite(trig,HIGH);
  delay (1);
  digitalWrite(trig,LOW);
  tiempo = pulseIn(echo,HIGH);
  distancia = tiempo/58.2;
  if(est == HIGH){
    digitalWrite(ena,HIGH);
    digitalWrite(en1,LOW);
    digitalWrite(en2,HIGH);
    digitalWrite(enb,HIGH);
    digitalWrite(en3,LOW);
    digitalWrite(en4,HIGH);
    if(distancia <= 20 && distancia >= 0){
      digitalWrite(ena,LOW);
      digitalWrite(en1,LOW);
      digitalWrite(en2,LOW);
      digitalWrite(enb,LOW);
      digitalWrite(en3,LOW);
      digitalWrite(en4,LOW);
    } 
  }
  else{
    digitalWrite(ena,LOW);
    digitalWrite(en1,LOW);
    digitalWrite(en2,LOW);
    digitalWrite(enb,LOW);
    digitalWrite(en3,LOW);
    digitalWrite(en4,LOW);
  }


  if(Serial.available() > 0)
  {
    datos = Serial.read();
    if(datos == 'a')
    {
      while(datos != 'e'){
        digitalWrite(ena,HIGH);
        digitalWrite(en1,LOW);
        digitalWrite(en2,HIGH);
        digitalWrite(enb,HIGH);
        digitalWrite(en3,LOW);
        digitalWrite(en4,HIGH);
        datos = Serial.read();
      }
    }
    if(datos == 'z')
    {
      digitalWrite(ena,HIGH);
      digitalWrite(en1,LOW);
      digitalWrite(en2,HIGH);
      digitalWrite(enb,HIGH);
      digitalWrite(en3,LOW);
      digitalWrite(en4,HIGH);
      delay(2000);
      digitalWrite(ena,LOW);
      digitalWrite(en1,LOW);
      digitalWrite(en2,LOW);
      digitalWrite(enb,LOW);
      digitalWrite(en3,LOW);
      digitalWrite(en4,LOW);
    }
    //if(Serial.available() == 0) para solo hacerlo mientras este presionado
    if(datos == 'e')
    {
      digitalWrite(ena,LOW);
      digitalWrite(en1,LOW);
      digitalWrite(en2,LOW);
      digitalWrite(enb,LOW);
      digitalWrite(en3,LOW);
      digitalWrite(en4,LOW);
    }
  }
}
