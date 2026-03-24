class DisplayManager():
    # Get what to display from UIManager and ensure that data is on the screen

class UIManager():
    # Get inputs from InputManager and use them to interact with UI and know what UI needs to be rendered

class StorageManager():
    # Get mp3s out of SD card via SPI and hand to BufferManager

class BufferManager():
    # Store a buffer in ram that can be read by AudioManager

class AudioManager():
    # Read music buffer from ram and ensure it is sent to the DAC and 
    # get input from InputManager for play/pause and volume

class InputManager():
    # Get input from buttons and sliders and rotary encoders and send data to all: 
    # UIManager(for handling UI), and AudioManager(for play/pause and volume)

class BatteryManager():
    # Monitor battery percentage and health, update UIManager when to warn user of 
    # low battery and ensure safe shutdown