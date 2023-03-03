#define DATAIN 0

void setup()
{
        Serial.begin(9600);
        randomSeed(analogRead(DATAIN));
}

void loop()
{
        int num = random(1,10);
        Serial.println(num);
        delay(1000);
}