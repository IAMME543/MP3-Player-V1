#include <Arduino.h>

#include "SD.h"

#include "types.h"

void setup()
{
    Serial.begin(115200);

    if (!SD.begin(5))
    { // CS pin (adjust to your wiring)
        Serial.println("SD init failed");
        return;
    }
}

void loop()
{
}
