int pv1v2 = A0;
int pv2 = A3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pv1v2, INPUT);
  pinMode(pv2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float v1v2 = analogRead(pv1v2)*(5.0/1023.0); // unit: V
  float v2 = analogRead(pv2)*(5.0/1023.0); // unit: V
  //Serial.println(voltageV1V2);
  //Serial.println(voltageV2);

  float v1 = v1v2 - v2;
  Serial.print(v1);
  Serial.print(" ");
  float R2 = 82.0; // the resistance for our current sensing; unit: Ohms
  float i = v2*1000/R2; // unit: mA
  Serial.println(i);
  
  delay(2);
}
