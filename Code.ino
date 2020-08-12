int xPin=A0;//263-400         stationary- 310-360   forward--240-290    backward--370-410
int yPin=A3;//258-393         stationary- 310-360   left--240-290      right--370-410         //1AB-UNIQUE CODE
int motor_pin1=3;//itwas 11
int motor_pin2=10;
int motor_pin3=5;
int motor_pin4=6;

void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A3,INPUT);
pinMode(motor_pin1,OUTPUT);
pinMode(motor_pin2,OUTPUT);
pinMode(motor_pin3,OUTPUT);
pinMode(motor_pin4,OUTPUT);

//pinMode(A2,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int xval=analogRead(xPin);
int yval=analogRead(yPin);
//int zval=analogRead(zPin);
Serial.print("xval=");    
Serial.println(xval);
Serial.print("yval=");
Serial.println(yval);
//Serial.print("zval=");
//Serial.println(zval);
if((xval>=310 && xval<=360) && (yval>=310 && yval<=360))
{     analogWrite(motor_pin1,0);
      analogWrite(motor_pin2,0);
      analogWrite(motor_pin3,0);
      analogWrite(motor_pin4,0);
 
}
if(xval>=240 && xval<=290)
{     int j=(xval-240)*5.12;
      analogWrite(motor_pin1,j);
      analogWrite(motor_pin2,0);
      analogWrite(motor_pin3,j);
      analogWrite(motor_pin4,0);
}
if(xval>=370 && xval<=410)
{     int i=(xval-370)*6.4;
      analogWrite(motor_pin1,0);
      analogWrite(motor_pin2,i);
      analogWrite(motor_pin3,0);
      analogWrite(motor_pin4,i);
}
if(yval>=240 && yval<=290)
{     int j=(xval-240)*5.12;
      analogWrite(motor_pin1,j);
      analogWrite(motor_pin2,0);
      analogWrite(motor_pin3,0);
      analogWrite(motor_pin4,j);
}
if(yval>=370 && yval<=410)
{      int i=(xval-370)*6.4;
      analogWrite(motor_pin1,0);
      analogWrite(motor_pin2,i);
      analogWrite(motor_pin3,i);
      analogWrite(motor_pin4,0);
}//delay(2000);

}
