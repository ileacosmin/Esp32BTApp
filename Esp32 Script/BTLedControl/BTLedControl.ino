#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

const int ledPin=2;

void setup(){
  SerialBT.begin("Esp32-BT");
  pinMode(ledPin,OUTPUT);
}

void loop(){
  if(SerialBT.available()){
    char c = SerialBT.read();
    if(c=='1')
    {
      digitalWrite(ledPin,HIGH);
    }else if(c=='0')
    {
      digitalWrite(ledPin,0);
    }
  }


}