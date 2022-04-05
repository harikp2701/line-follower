void setup() {
  pinMode(6,INPUT);
  pinMode (7,INPUT);
    Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
void loop() {
  Serial.print("sensor un-");Serial.print(digitalRead(6));
  Serial.print("");
  if(digitalRead(6)==LOW){
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
  }
 else{
     digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
}
Serial.print("Sensor sieze");Serial.print(digitalRead(7));
Serial.println("");
if(digitalRead(7)==LOW){
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
}
 else{
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);

 }
 delay(10);
}
