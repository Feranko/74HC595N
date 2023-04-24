#define program1 5
#define program2 6
int stcp_pin = 4;
int shcp_pin = 3;
int ds_pin = 2;
float analog_input = A1;
int delay_value = 0;
int diod_on = 0;
int status = 0;
void setup() {
  pinMode(program1,INPUT);
  pinMode(program2,INPUT);
  pinMode(stcp_pin,OUTPUT);
  pinMode(shcp_pin,OUTPUT);
  pinMode(ds_pin,OUTPUT);
  pinMode(analog_input,INPUT);
}

void slider(){
  delay_value = map(analogRead(analog_input),0,1023,0,500);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00000000);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);
  
  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00000001);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);
  
  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00000011);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);
  
  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00000111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);
  
  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00001111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);
  
  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00011111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  
  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00111111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);
  
  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B01111111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B11111111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B01111111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00111111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00011111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00001111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00000111);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00000011);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00000001);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);

  digitalWrite(stcp_pin,LOW);
  shiftOut(ds_pin,shcp_pin,LSBFIRST,0B00000000);
  digitalWrite(stcp_pin,HIGH);
  delay(delay_value);
}

void grow_bin(){
  for(int a=0;a<255;a++){
      digitalWrite(stcp_pin,LOW);
      shiftOut(ds_pin,shcp_pin,LSBFIRST,a);
      delay_value = map(analogRead(analog_input),0,1023,0,1000);
      delay(delay_value);
      digitalWrite(stcp_pin,HIGH);
  }
}

void loop() {
  slider();
}
