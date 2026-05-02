#include "storage.h"
#include "PCA95x5.h"

PCA9555 ioex;
// CMD
const int MISO_PIN = 10;
// DATA0
const int MOSI_PIN = 11;
// CLK
const int SCK_PIN = 9;
// Card select, is on gpio expander, is also DATA3/CD, needs to be held low on startup to initialise sd card to spi mode
const int IOEX_CS_PIN = 13; // double check pin

void Storage::init()
{
    Serial.begin(115200);
    delay(2000);

    Wire.begin();
    ioex.attach(Wire, 0x20);
    ioex.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
    ioex.direction(PCA95x5::Direction::IN_ALL);
}
void Storage::full_scan()
{
}
void Storage::get_cache()
{
}