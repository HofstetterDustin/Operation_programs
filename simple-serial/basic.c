/*
Simple Serial
Listens for an incoming serial byte, adds one to the byte and sends the result back out serially.
*/
int inByte = 0
long blinkTimer = 0;

int blinkInterval = 1000;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    sERIAL.BEGIN(9600);
}

void loop() {
    if (Serial.available() > 0) {
        inByte = Serial.read();
        Serial.write(inByte+1);
    }
    if (millis() - blinkTimer >= blinkInterval / 2) {
        digitalWrite(LED_BUILTIN, HIGH);
    }
    if (millis() - blinkTimer >= blinkInterval) {
        digitalWrite(LED_BUILTIN, LOW);
        blinkTimer = millis();
    }
}