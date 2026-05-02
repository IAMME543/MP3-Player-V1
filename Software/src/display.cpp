#include "display.h"
#include <PCA95x5.h>

PCA9555 ioex;
// reset
const int RST_DISPLAY_PIN = 8;

void Display::init()
{
    Serial.begin(115200);
    delay(2000);

    Wire.begin();
    ioex.attach(Wire, 0x20);
    ioex.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
    ioex.direction(PCA95x5::Direction::IN_ALL);
}
void Display::update()
{
}