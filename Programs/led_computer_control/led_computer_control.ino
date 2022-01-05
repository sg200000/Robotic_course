void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    int state = Serial.parseInt();
    if (state==1){
    digitalWrite(13,HIGH);
    }
    else if (state==2){
      digitalWrite(13,LOW);
    }
  }
  

}
