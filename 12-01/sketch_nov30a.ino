int LED = 3;
int POT = A0;
int analog_readValue;
int analog_writeValue;
int step_value;
bool increment = true;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(POT, INPUT);
    pinMode(LED, OUTPUT);
    analog_writeValue = 0;
    step_value = 20;
}

void loop() {
  if(increment){
    analog_writeValue += step_value;
    if(analog_writeValue > (255 - step_value)){
      increment = false;
    }
  }else{
    analog_writeValue -= step_value;
    if(analog_writeValue < (step_value)){
      increment = true;
    }
  }
  
  analogWrite(LED, analog_writeValue);
  
  analog_readValue = analogRead(POT);
  Serial.print("analog_readValue: ");
  Serial.println(analog_readValue);
  
  delay(100);

}
