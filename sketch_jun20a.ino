#define BAUD_VALUE 9600
char value_Byte = ' ';

void setup(void)
{
    Serial.begin(BAUD_VALUE);
    pinMode(13 , OUTPUT);
}

void loop(void)
{
    if(Serial.available() > 0){
        value_Byte = Serial.read();

    if(value_Byte == '1'){
        digitalWrite(13, HIGH);
            
        }
    else if(value_Byte == '0'){
        digitalWrite(13, LOW);
        }
    }
}
