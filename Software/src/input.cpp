#include <input.h>
#include <PCA95x5.h>

PCA9555 ioex;

//top button
const int UP_PIN = 0;
//right button
const int NEXT_PIN = 4;
//bottom button
const int DOWN_PIN = 3;
//left button
const int PREV_PIN = 2;
//center button
const int PLAY_PAUSE_PIN = 1;
//rotary encoder
const int POT_A = 5;
const int POT_B = 6;

void Input::init() {
    Serial.begin(115200);
    delay(2000);

    Wire.begin();
    ioex.attach(Wire, 0x20);
    ioex.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
    ioex.direction(PCA95x5::Direction::IN_ALL);
}
void Input:update() {

}