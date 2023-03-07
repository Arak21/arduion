int ledPin = 13;
int delayTime = 1000;
int delayTime2 = 3000;


void setup() 
{
      pinMode(ledPin,OUTPUT);
}

void loop() 
{
     digitalWrite(ledPin,HIGH);
     delay(delayTime);
     digitalWrite(ledPin,LOW);
     delay(delayTime);
     for(int count=0;count<20;count ++)
     {
          delay(delayTime2);
     }

}
