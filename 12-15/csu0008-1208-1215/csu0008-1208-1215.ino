int pv1v2 = A0; // A0 and A3 are port identifiers shown on the Arduino board
int pv2 = A3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pv1v2, INPUT);
  pinMode(pv2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // convert ADC readings
  float v1v2 = analogRead(pv1v2)*(5.0/1023.0); // unit: V
  float v2 = analogRead(pv2)*(5.0/1023.0); // unit: V

  float v1 = v1v2 - v2;
  Serial.print(v1);
  Serial.print(" ");
  
  // the resistance we use to measure current
  // unit: Ohms
  // change it if need be
  float R2 = 82.0;

  float i = v2*1000/R2; // unit: mA
  Serial.println(i);
  
  delay(2); // this translates to our sampling rate
}
