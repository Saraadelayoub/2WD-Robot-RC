# define input1 4
# define input2 5
# define input3 6
# define input4 7
# define speed1 9
# define speed2 10
char read;
void setup()
{
  for(int i=4 ; i<=7 ; i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
   pinMode(speed1,OUTPUT);
   pinMode(speed2,OUTPUT);
}

void loop()
{
  if(Serial.available()>0){
    read=Serial.read();
    switch(read){
      // Forword
      case'f':
      digitalWrite(input1,HIGH);
      digitalWrite(input2,LOW);
      digitalWrite(input3,HIGH);
      digitalWrite(input4,LOW);
      analogWrite(speed1,150);
      analogWrite(speed2,150);
      break;
      // backword
      case'b':
      digitalWrite(input1,LOW);
      digitalWrite(input2,HIGH);
      digitalWrite(input3,LOW);
      digitalWrite(input4,HIGH);
      analogWrite(speed1,150);
      analogWrite(speed2,150);
      break;
      // Right
     case'r':
      digitalWrite(input1,HIGH);
      digitalWrite(input2,LOW);
      digitalWrite(input3,LOW);
      digitalWrite(input4,LOW);
      analogWrite(speed1,150);
      analogWrite(speed2,0);
      break;
      // Left
      case'l':
      digitalWrite(input1,LOW);
      digitalWrite(input2,LOW);
      digitalWrite(input3,HIGH);
      digitalWrite(input4,LOW);
      analogWrite(speed1,0);
      analogWrite(speed2,150);
      break;
      // stop
      case's':
      digitalWrite(input1,LOW);
      digitalWrite(input2,LOW);
      digitalWrite(input3,LOW);
      digitalWrite(input4,LOW);
      analogWrite(speed1,0);
      analogWrite(speed2,0);
      break;
    }
  }
}