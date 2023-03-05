int outPin = 7;
int delayTime = 3000;

void setup()
{
        pinMode(outPin,OUTPUT);
}

void loop()
{
        digitalWrite(outPin,HIGH);
        delay(delayTime);
        digitalWrite(outPin,LOW);
        delay(delayTime);
}