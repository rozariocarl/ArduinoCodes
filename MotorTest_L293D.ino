/* The first part defines four variables for 4 pins 
 * in setup these pins are set to output
 * in loop the pins are set to HIGH and LOW to switch the motors ON and OFF
 ------------------------------------------------------------------------------*/
  
//pin Variables for Motor A
int motorPin1  = 12;  // Pin Conected to Ia1
int motorPin2  = 13;  // Pin Conected to Ia2

//pin Variables for Motor B
//int motorPin3  = 7;  // Pin Conected to Ib1
//int motorPin4  = 8;  // Pin Conected to Ib2

void setup(){
    //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    //uncomment next two lines if you are using the second motor
    //pinMode(motorPin3, OUTPUT);
    //pinMode(motorPin4, OUTPUT);
}

void loop(){
    //===========================================================================================
    //This code  will turn Motor A clockwise for 5 seconds and then anti-clockwise for 5 seconds
    //===========================================================================================
    digitalWrite(motorPin1, HIGH);  //
    digitalWrite(motorPin2, LOW);   //
    delay(5000); 
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    delay(5000);

    //Because the code is in loop function the clockwise and anti-clockwise rotation will constantly repeat
    //For using the second motor use motorPin3 and motorPin4. Keep one HIGH and other LOW
}

