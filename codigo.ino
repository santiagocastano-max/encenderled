const int ledPin = 13;


void setup(){
  Serial.begin(9600);
  pinMode(ledPin , OUTPUT); 
}

void loop(){
 digitalWrite(ledPin,HIGH);
  delay(1000);
  digital Write(1000);
  delay(1000);
}
