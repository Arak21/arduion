int pwm = 0;
int PinMode = 3;

void setup()
{
        Serial.begin(9600);
}

void loop()
{
        analogWrite(PinMode,pwm);
        delay(100);
        pwm++;
}