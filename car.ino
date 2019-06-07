
    // defines pins numbers
    const int trigPin = 9;
    const int echoPin = 10;
     const int trigPin1 = 7;
    const int echoPin1 = 6;
int led = 3;           // the PWM pin the LED is attached to

int led1 = 5; 
int brightness = 255; 

    
    // defines variables
    long duration;
    int distance;
    long duration1;
    int distance1;
    void setup() {
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(echoPin, INPUT); // Sets the echoPin as an Input
    Serial.begin(9600); // Starts the serial communication
    }
    void loop() {
    // Clears the trigPin
    digitalWrite(trigPin, LOW);
        digitalWrite(trigPin1, LOW);

    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
        digitalWrite(trigPin1, HIGH);

    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
        digitalWrite(trigPin1, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
        duration1 = pulseIn(echoPin1, HIGH);

    // Calculating the distance
    distance= duration*0.034/2;
        distance1= duration1*0.034/2;

    // Prints the distance on the Serial Monitor
    Serial.print("Distance: ");
    Serial.println(distance);
   // Serial.print("Distance1: ");
   // Serial.println(distance1);

if(distance<20){
  analogWrite(led, brightness);
  //delay(2000);
}
else if(distance1<20){
  analogWrite(led1, brightness);
    delay(2000);
}


  
  
else 
  analogWrite(led, 20);
    analogWrite(led1, 20);



    
    }
