

#define shockinput A0
#define shockAlert 3

void setup() {
  Serial.begin(9600); // open the serial port at 9600 bps:
  pinMode(shockinput, INPUT); // setting up input for shock sensor 
  pinMode(shockAlert,OUTPUT);
}

void loop() {
  int sockValue = analogRead(shockinput); //getting the shock value
  Serial.print(sockValue);
  Serial.print("\n");
  digitalWrite(shockAlert,LOW);
  if(sockValue < 500){
    Serial.print("Shocked! \n");
    digitalWrite(shockAlert,HIGH);
    delay(500);
  }
  Serial.print("\n");
  delay(100);
}
