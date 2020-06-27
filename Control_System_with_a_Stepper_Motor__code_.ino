// including the Stepper library
#include <Stepper.h> 

double stepsPerRevolution = 2048;

// initializing the stepper library on pins 8 to 11 in Arduino UNO
// Pin inversion to make the library work 
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);  

void setup() { 
   // put your setup code here, to run once:
   myStepper.setSpeed(10);  
   Serial.begin(9600); 
} 

void loop() { 
  // put your main code here, to run repeatedly:
  
  // 1 rotation counterclockwise:  
  Serial.println("counterclockwise");    
  myStepper.step(stepsPerRevolution);  
  delay(1000); 
  
  // 1 rotation clockwise: 
  Serial.println("clockwise");  
  myStepper.step(-stepsPerRevolution); 
  delay(1000); 

}
