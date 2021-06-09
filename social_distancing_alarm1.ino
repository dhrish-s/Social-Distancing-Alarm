long time;
long distance;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(5, INPUT);
}

void loop()
{
  digitalWrite(9, LOW);
  delay(0.002);
  digitalWrite(9, HIGH);
  delay(0.005);
  digitalWrite(9, LOW);
  
  time = pulseIn(5, HIGH);
  
  distance = time*0.0344*0.5;
  
  if( distance < 150){
  	digitalWrite(12, HIGH);
  }
  else{
  	digitalWrite(12, LOW);
  }
    
}
