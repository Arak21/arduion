int ledPin = 13;
int delayTime = 1000;
int delayTime2 = 3000;


void setup()
{
        pinMode(ledPin,OUTPUT);
}

void loop()
{
    for(int count=0;count<20;count ++)
    {
            flash(delayTime);
    }
    delay(delayTime2);
}

void flash(int delayTime3)
{
        digitalWrite(ledPin,HIGH);
        delay(delayTime3);
        digitalWrite(ledPin,LOW);
        delay(delayTime3);
}