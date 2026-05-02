#pragma once

class Storage {
    public:
        void init();
        void full_scan();
        void get_cache();
        //should be called when detect on sd card switches from 0 to 1. 
        //load a cached index of all songs until we have rescanned the full library. we only do new scan when told to(a button in the settings) 
        // or when the sd card is reinstered
};