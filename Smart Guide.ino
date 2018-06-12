
#define trigPin 13
#define echoPin 12
#define buzzer 11


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  
 
  digitalWrite(trigPin, HIGH);
 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 150) {  
    digitalWrite(buzzer,HIGH); 
 
}
  else {
    digitalWrite(buzzer,LOW);
    
  }
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  digitalWrite(buzzer,HIGH);
  
}
