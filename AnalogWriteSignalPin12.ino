// Simple receiver communication program

// CH1: right stick left and right
// CH2: right stick up and down
// CH3: left stick up and down
// CH4: left stick left and right
// CH5: left knob
// CH6: right knob

#define signalPin 12 // Signal cable goes in digital pin 12 of Arduino
#define CH1 11

int ch1Value;

int readChannel(int channelInput, int minLimit, int maxLimit, int defaultValue) {
  int ch = pulseIn(channelInput, HIGH, 30000);
  if (ch < 100) return defaultValue;
  return map(ch, 1000, 2000, minLimit, maxLimit);
}

void setup() {
  pinMode(signalPin, INPUT); // Set signalPin as INPUT
  Serial.begin(9600);
  pinMode(CH1, INPUT);
}

void loop() {
 
  analogWrite(signalPin, 25); // Corrected pin name
  delay(1000);
}
