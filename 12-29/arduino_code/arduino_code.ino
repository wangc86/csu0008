// An example code to measure the V_IN-V_OUT transfer function
int pv_in = A0;
int pv_out = A5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pv_in, INPUT);
  pinMode(pv_out, INPUT);
}

void loop() {
  float v_in = analogRead(pv_in)*(5.0/1023.0); // unit: V
  float v_out = analogRead(pv_out)*(5.0/1023.0); // unit: V
  //Serial.println(v_in);
  //Serial.println(v_out);

  Serial.print(v_in);
  Serial.print(" ");
  Serial.println(v_out);
  
  delay(20);
}
