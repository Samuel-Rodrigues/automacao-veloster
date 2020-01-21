#ifndef ArduinoNano_h
#define ArduinoNano_h

#include <Arduino.h> 

class ArduinoNano{
    public:
    	ArduinoNano();
    	void LigaPino(int pino);
    	void DesligaPino(int pino);   			  	
};
#endif