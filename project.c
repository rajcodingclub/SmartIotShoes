// defines pins numbers

const int trigPin=9;
const int echoPin=10;
const int motor=12;
const int buzzer=11;

// define the duration and distance variables

long duration, distance;
void setup()
{ 
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);  // Sets the echopin as an Input
  pinMode(motor, OUTPUT);  // Sets the motor as an Output
  pinMode(buzzer,OUTPUT);   // Sets the buzzer as an Output
}

void loop()
{
    // Clears the trigPin
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance = duration*0.034/2;

if (distance < 20) // Checking the distance, you can change the value
{ 
digitalWrite(motor,HIGH); // When the the distance below 20cm
digitalWrite(buzzer,HIGH);
} else
{
digitalWrite(motor,LOW);// when greater than 20cm
digitalWrite(buzzer,LOW); 
} delay(500);
}