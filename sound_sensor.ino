int threshold = 50; //Change This
int volume;

 
void setup() {                
  Serial.begin(9600); // For debugging
  for (int i=6;i<=13;i++){
  pinMode(i, OUTPUT);         
    }
  
}
 
void loop() {
  
  volume = analogRead(A0); // Reads the value from the Analog PIN A0
  /*
    //Debug mode
    Serial.println(volume);
    delay(100);
  */
  
  if(volume>=threshold){
    
    for (int i=6;i<=13;i++){
      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i, LOW);
      
    }
    
  }  
  
 
}
