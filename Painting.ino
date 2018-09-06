void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, INPUT);//Sensor 1
  pinMode(5, INPUT);//Sensor 2
  pinMode(6, INPUT);//Sensor 3
  pinMode(3, OUTPUT);//Alarm
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(4) == HIGH) AND (digitalRead(5) == HIGH)
  {
    digitalWrite(3, HIGH);
  }//Alarm Sounds
  if (digitalRead(5) == HIGH) AND (digitalRead(6) == HIGH)
  {
    digitalWrite(3, HIGH);
  }//Alarm Sounds
  else 
  {
    digitalWrite(3, LOW);
  }//No alarm
  delay(500);
}
