//--------------RJ---------------//
//--------BT app control---------//


int relay1=2;
int relay2=3;
int relay3=4;
int relay4=5;
int relay5=6;
int relay6=7;
int relay7=8;
int relay8=9;

int Received=0;
int relay1_state =0;
int relay2_state =0;
int relay3_state =0;
int relay4_state =0;
int relay5_state =0;
int relay6_state =0;
int relay7_state =0;
int relay8_state =0;


void setup(){
  
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
  pinMode(relay7, OUTPUT);
  pinMode(relay8, OUTPUT);
  
}

void loop(){
 
 if(Serial.available()>0)
 { 
    Received = Serial.read();
    
 }
////////////////LIGHT/////////////////////
if (relay1_state == 0 && Received == '1')
  {
    digitalWrite(relay1,HIGH);
    relay1_state=1;
    Received=0;  
  }
if (relay1_state ==1 && Received == '1')
  {
    digitalWrite(relay1,LOW);
    relay1_state=0;
    Received=0;
  }
///////////////////////////////////////////



////////////////VENT/////////////////////
if (relay2_state == 0 && Received == '2')
  {
    digitalWrite(relay2,HIGH);
    relay2_state=1;
    Received=0;  
  }
if (relay2_state ==1 && Received == '2')
  {
    digitalWrite(relay2,LOW);
    relay2_state=0;
    Received=0;
  }
///////////////////////////////////////////




////////////////PC/////////////////////
if (relay3_state == 0 && Received == '3')
  {
    digitalWrite(relay3,HIGH);
    relay3_state=1;
    Received=0;  
  }
if (relay3_state ==1 && Received == '3')
  {
    digitalWrite(relay3,LOW);
    relay3_state=0;
    Received=0;
  }///////////////////////////////////////////




  
////////////////LAMP/////////////////////
 if (relay4_state == 0 && Received == '4')
  {
    digitalWrite(relay4,HIGH);
    relay4_state=1;
    Received=0;  
  }
if (relay4_state ==1 && Received == '4')
  {
    digitalWrite(relay4,LOW);
    relay4_state=0;
    Received=0;
  }
 ///////////////////////////////////////////


 if (relay5_state == 0 && Received == '5')
  {
    digitalWrite(relay5,HIGH);
    relay5_state=1;
    Received=0;  
  }
if (relay5_state ==1 && Received == '5')
  {
    digitalWrite(relay5,LOW);
    relay5_state=0;
    Received=0;
  }


  if (relay6_state == 0 && Received == '6')
  {
    digitalWrite(relay6,HIGH);
    relay6_state=1;
    Received=0;  
  }
if (relay6_state ==1 && Received == '6')
  {
    digitalWrite(relay6,LOW);
    relay6_state=0;
    Received=0;
  }


  if (relay7_state == 0 && Received == '7')
  {
    digitalWrite(relay7,HIGH);
    relay7_state=1;
    Received=0;  
  }
if (relay7_state ==1 && Received == '7')
  {
    digitalWrite(relay7,LOW);
    relay7_state=0;
    Received=0;
  }

  if (relay8_state == 0 && Received == '8')
  {
    digitalWrite(relay8,HIGH);
    relay8_state=1;
    Received=0;  
  }
if (relay8_state ==1 && Received == '8')
  {
    digitalWrite(relay8,LOW);
    relay8_state=0;
    Received=0;
  }
 
}
