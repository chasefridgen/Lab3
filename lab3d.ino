#define var_resistor A0 

int var_resistor_value;
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop(){
  var_resistor_value = analogRead(var_resistor);
  Serial.println(var_resistor_value);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(var_resistor_value);
  digitalWrite(LED_BUILTIN, LOW);
  delay(var_resistor_value);
}
