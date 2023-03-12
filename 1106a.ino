int ledPin = 13;
int delayTime = 1000;


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
      if(delayTime<100)
      
      {
            delayTime=1000;
      }
      else
      {
            delayTime=delayTime-100;
            
      }

}
