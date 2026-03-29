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

class MetadataParser():
    # recieve song file and get metadata
    # create Song class and set avaliable metadata
    # if artist value exists and artist is not in known artists then create artist
    # if album value exists and album is not known then create album class 


class Song():
    def __init__(self, title="Unkown", file_path="", album=None, artists=None, track_no=0):
        self.title = title
        self.file_path = file_path
        self.album = album
        self.artists = artists or []
        self.track_number = track_number

class Album():
    def __init__(self, title="Unkown", artists=None, songs=None):
        self.title = title
        self.artists = artists or []
        self.songs = songs or []
class Artists():
    def __init__(self, name="Unkown", albums=None):
        self.name = name
        self.albums = albums or []