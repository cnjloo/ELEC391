/*
  # Example code for the moisture sensor
  # Editor     : Lauren
  # Date       : 13.01.2012
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water

  Line 3 modified by Candice Loo, ELEC 391 group 5
*/

volatile int sm = 0;

int sen0114Read(){

  return sm = analogRead(A0);
  Serial.print("Moisture Sensor Value:");
  Serial.println(sm);  
  delay(100);
  
}
