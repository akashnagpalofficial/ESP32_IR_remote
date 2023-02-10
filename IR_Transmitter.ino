#include <IRremote.h>

const int TxPin=22;
const int pushButton = 2;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IrSender.begin(TxPin, false);
pinMode(pushButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonState = digitalRead(pushButton);

if(buttonState)
{
IrSender.sendNEC(0x807F02FD, 32);
}

delay(1);
}
