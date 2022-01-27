#include <Arduino.h>

const int ProxSensor=2; //Declaring where the Out pin from the sensor is wired
 
void setup() {                
  pinMode(LED_BUILTIN, OUTPUT);   // setting the pin modes, the "13" stands for the internal Arduino uno internal LED  
  pinMode(ProxSensor,INPUT); // then we have the out pin from the module
}
 
void loop() {
  
  if(digitalRead(ProxSensor)==HIGH)      //Check the sensor output if it's high
             {
               digitalWrite(LED_BUILTIN, HIGH);   // Turn the LED on (Yes by writing LOW)
             }
  else
            {
              digitalWrite(LED_BUILTIN, LOW);    // Turn the LED OFF if there's no signal on the ProxSensor
             }
  delay(100);             
 
}