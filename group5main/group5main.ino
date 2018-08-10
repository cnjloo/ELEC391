// Add relevant libraries
#include <Event.h>
#include <Timer.h>

Timer tim;

// Add sensor code to perform readings and measurements
#include "C:\Users\Candice\Documents\ELEC391\dhtRead\dhtRead.ino"             // Contains dhtSetup and dhtRead. dhtRead outputs array, sensorData
#include "C:\Users\Candice\Documents\ELEC391\sen0114Read\sen0114Read.ino"
#include "C:\Users\Candice\Documents\ELEC391\MKRWANLoRaSendAndReceive\MKRWANLoRaSendAndReceive.ino"

void setup() {
  // put your setup code here, to run once:
  dhtSetup();
  tim.every(1000, readSensors);

}

void loop() {
  // put your main code here, to run repeatedly:
  tim.update();
}

void readSensors() {
  dhtRead();
  sensorData[5] = (float) sen0114Read();
}

