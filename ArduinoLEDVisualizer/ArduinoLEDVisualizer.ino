/*
  
 */
int  audioIn = A0;

const int   redLEDleft = A1;
const int greenLEDleft = A2;
const int  blueLEDleft = A3;


const int   redLEDright = A4;
const int greenLEDright = A5;
const int  blueLEDright = A6;


float redValue   = 0;
float greenValue = 0;
float blueValue  = 0;


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}


void loop() {  

  // read the input on analog pin 0 (value spans 0 - 1023):
  int sensorValue = analogRead(audioIn);

  // write to 
  analogWrite(redLED, sensorValue);

  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
}

void draw() }
 background(redValue, greenValue, blueValue);
}
