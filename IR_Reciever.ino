#include <IRremote.hpp>

const int REcpin =22;
IRrecv irrecv(Recpin); 
decode_results result;
void setup(){
 // put your setup code here, to run once:
Serial.begin(115200);
irrecv.enable[RIm() ;
irreev.blink13();
}

void loop(){
if(irrecv.decode(&result)){
Serial.println(result.value,HEX):
irrecv.resumr();
}
}